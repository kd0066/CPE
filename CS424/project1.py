keywords = ["bool", "int", "char", "else", "false", "float", "if", "name", "true", "while"]
operators = ["=", "!=", "<", "<=", "> <=", "+", "-", "*", "/"]
punctuation = [":", "," , "{" , "}" , "[" , "]"]

with open("python.txt", "r") as objectfileopen:
    for line in objectfileopen:
        for word in line.split():
            word = word.replace("\n", "")
            for char in word:
                if (char == "'"):
                    print("'")
                    while(char != "'"):

                            print(char)
                    print("'")
                for punct in punctuation:
                    if punct == char:
                        print("Its a mutha Fcukin punctuation bitchhhhh")
            word = word.replace(":", "")
            for key in keywords:
                if str(key) == str(word):
                    print("Its a mutha Fcukin keyword bitchhhhh")
            if word.isdigit():
                print("Its a mutha Fcukin digit bitchhhhh")
