#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------
#------------------------------- Kevin Donovan -------------------------------
#------------------------------ CS424 project 1 ------------------------------
#------------------------------- March 4, 2020 -------------------------------
#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

keywords = ["bool", "main", "int", "char", "else", "false", "float", "if", "name", "true", "while"]
operators = ["=", "!=", "<", "<=", "> <=", "+", "-", "*", "/"]
punctuation = [":", "," , "{" , "}" , "[" , "]", ";", "(", ")"]
identifier = {}

outFile = open("pythonOut.txt", "w")
outFile.write("Line     " + "Token Type     " + "Lexeme\n")
#-----------------------------------------------------------------------------
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

#-----------------------------------------------------------------------------
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
#-----------------------------------------------------------------------------
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
                isFloat = True
                printme(count,"Float           ", word)
            else:
                if char.isdigit() == True:
                    counter += 1
#-----------------------------------------------------------------------------
    if word.isdigit():
        isDigi = True
        printme(count,"Integer         ", word)
#-----------------------------------------------------------------------------
    for punct in punctuation:
        if word == punct:
            printme(count,"Punctuation     ", punct)
            isPunct = True
#-----------------------------------------------------------------------------
    for op in operators:
        if op == word:
            printme(count,"Operator        ", op)
            isOp = True
#-----------------------------------------------------------------------------
    for key in keywords:
        if word == key:
            amKeyword = True
            printme(count,"Keyword         ", word)
            isKey = True
#-----------------------------------------------------------------------------
    if word[0] == "'":
        if word[1].isalpha():
            if word[2] == "'":
                printme(count,"Character       ", word[1])
                isChar = True
#-----------------------------------------------------------------------------
    if amKeyword != True:
        for char in word:
            if word[0].isalpha() and start == False:
                counter = counter + 1
                if counter == len(word):
                    if word in identifier:
                        writeMe(word, count)
                        isIdentifier = True
                        printme(count,"Identifier      ", word)
                    else:
                        writeMe(word, count)
                        isIdentifier = True
                        printme(count,"Identifier      ", word)
                start = True

                while counter != len(word):
                    if word[counter].isalnum() == True:
                        counter = counter + 1
                    if counter == len(word):
                        if word in identifier:
                            writeMe(word, count)
                            isIdentifier = True
                            printme(count,"Identifier      ", word)
                        else:
                            writeMe(word, count)
                            isIdentifier = True
                            printme(count,"Identifier      ", word)
                        amIdentifier = True
                        counter = 0
                        break
#-----------------------------------------------------------------------------
    if  isIdentifier == False and isDigi == False and isOp == False and isFloat == False and isPunct == False and isChar == False and isKey == False:
        print("ERROR AT LINE " + str(count) + " (" + str(word) + ") is nonsense")
        outFile.write("ERROR AT LINE " + str(count) + " (" + str(word) + ") is nonsense\n")
#-----------------------------------------------------------------------------
def printme(lineNumber, keyword, key):
    print("%-2d       %-s%s" %(lineNumber, keyword, key))
    outFile.write('%2d       %s         %s\n' %(lineNumber, keyword, key))
#-----------------------------------------------------------------------------
def writeMe(word, count):
    if word in identifier:
        identifier[word].append(count)
    else:
        identifier[word] = [count]
#-----------------------------------------------------------------------------
if __name__ == "__main__":
    main()
#-----------------------------------------------------------------------------
    print("Symbol Table")
    print("Symbol        Line Numbers")
    outFile.write("Symbol Table\n")
    outFile.write("Symbol        Line Numbers\n")
    for k, v in identifier.items():
        for value in v:
            v = str(v)
            v = v.replace("[", "")
            v = v.replace("]", "")
        print("%-10s    (%s)" %(k, v))
        outFile.write('%-10s    (%s)\n' %(k, v))
#-----------------------------------------------------------------------------
