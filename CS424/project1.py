keywords = ["bool", "main", "int", "char", "else", "false", "float", "if", "name", "true", "while"]
operators = ["=", "!=", "<", "<=", "> <=", "+", "-", "*", "/"]
punctuation = [":", "," , "{" , "}" , "[" , "]", ";", "(", ")"]
flag = False

indentitties = {}
punctitties = {}
optitties = {}
chartitties = {}
keytitties = {}
digititties = {}
floatitties = {}

outFile = open("pythonOut.txt", "w")
outFile.write("Line     " + "Token Type     " + "Lexeme\n")

def main():
    print("Line     " + "Token Type     " + "Lexeme")

    with open("pythonIn.txt", "r") as inputFile:
        count = 0;
        for line in inputFile:
            count += 1
            line = line.replace("\n", "")
            for word in line.split():
                nextToken(count, word)
        print()
        outFile.write('\n')


def nextToken(count, word):
    amKeyword = False
    amIdentifier = False
    start = False
    isDecimal = False
    first = False
    counter = 0
    isIdentifier = False
    isDigi = False
    isOp = False
    isFloat = False
    isPunct = False
    isChar = False
    isKey = False

    if word[0].isdigit() == True:
        counter += 1
        first = True

    for char in word:
        if first == True and isDecimal == False:
            if char == ".":
                isDecimal = True
                counter += 1
            if char.isdigit():
                counter += 1
        if first == True and isDecimal == True:
            if counter == len(word):
                isFloat = True
                if word in floatitties:
                    floatitties[word].append(count)
                    isFloat = True
                else:
                    floatitties[word] = [count]
                    printfloat(count, word)
                    isFloat = True
            else:
                if char.isdigit() == True:
                    counter += 1

    if word.isdigit():
        if word in digititties:
            digititties[word].append(count)
            isDigi = True
        else:
            digititties[word] = [count]
            printdigis(count, word)
            isDigi = True

    for punct in punctuation:
        if punct == word:
            if punct in punctitties:
                punctitties[punct].append(count)
                isPunct = True
            else:
                punctitties[punct] = [count]
                printpuncts(count, punct)
                isPunct = True

    for op in operators:
        if op == word:
            if op in optitties:
                optitties[op].append(count)
                isOp = True
            else:
                optitties[op] = [count]
                printops(count, op)
                isOp = True

    for key in keywords:
        if word == key:
            amKeyword = True
            if word in keytitties:
                keytitties[word].append(count)
                isOp = True
            else:
                keytitties[word] = [count]
                printKeys(count, word)
                isKey = True

    for char in word:
        if word[0] == "'":
            if word[1].isalpha():
                if word[2] == "'":
                    # word[2] = word[2].replace("'", "")
                    if word[1] in chartitties:
                        chartitties[word[1]].append(count)
                        isChar = True
                    elif word[1] not in chartitties:
                        chartitties[word[1]] = [count]
                        printchars(count, word[1])
                        isChar = True
                        break
    counter = 0

    if amKeyword != True:
        for char in word:
            if word[0].isalpha() and start == False:
                counter = counter + 1
                if counter == len(word):
                    if word in indentitties:
                        indentitties[word].append(count)
                        isIdentifier = True
                    else:
                        indentitties[word] = [count]
                        isIdentifier = True
                start = True

                while counter != len(word):
                    if word[counter].isalnum() == True:
                        counter = counter + 1
                    if counter == len(word):
                        if word in indentitties:
                            indentitties[word].append(count)
                            isIdentifier = True
                        else:
                            indentitties[word] = [count]
                            isIdentifier = True
                        amIdentifier = True
                        counter = 0
                        break
    if  isIdentifier == False and isDigi == False and isOp == False and isFloat == False and isPunct == False and isChar == False and isKey == False:
        print("ERROR (" + str(word) + ") is nonsense")
        outFile.write("ERROR (" + str(word) + ") is nonsense\n")

def printKeys(lineNumber, key):
    print("%2d       Keyword         %s" %(lineNumber, key))
    outFile.write('%2d       Keyword         %s\n' %(lineNumber, key))
    # outFile.write("Hello please work\n")

def printchars(lineNumber, char):
    print("%2d       Character       %s" %(lineNumber, char))
    outFile.write('%2d       Character       %s\n' %(lineNumber, char))

def printops(lineNumber, op):
    print("%2d       Operator        %s" %(lineNumber, op))
    outFile.write('%2d       Operator        %s\n' %(lineNumber, op))

def printpuncts(lineNumber, punc):
    print("%2d       Punctuation     %s" %(lineNumber, punc))
    outFile.write('%2d       Punctuation     %s\n' %(lineNumber, punc))

def printdigis(lineNumber, num):
    print("%2d       Integer         %s" %(lineNumber, num))
    outFile.write('%2d       Integer         %s\n' %(lineNumber, num))

def printfloat(lineNumber, float):
    print("%2d       Float           %s" %(lineNumber, float))
    outFile.write('%2d       Float           %s\n' %(lineNumber, float))


if __name__ == "__main__":
    main()

    print("Symbol Table")
    print("Symbol        Line Numbers")
    outFile.write("Symbol Table\n")
    outFile.write("Symbol        Line Numbers\n")
    for k, v in indentitties.items():
        # print(k)
        for value in v:
            v = str(v)
            v = v.replace("[", "")
            v = v.replace("]", "")
        print("%-10s    (%s)" %(k, v))
        outFile.write('%-10s    (%s)\n' %(k, v))
