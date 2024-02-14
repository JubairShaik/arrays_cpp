import random
import string

def generate_password(length):
    characters= string.ascii_letters+ string.digits+string.punctuation
    password = ''.join(random.choice(characters) for _in range(length))
    return password

def main():
    print("welcome to password generator!")
    while True:
        try:
            length= int(input("enter the desired length of password:"))
            if length>0 :
                break
            else:
                print("enter a valid positive integer")
    expected valueError:
    print("invalid input.please enter a valid number")
    password= generate_password(length)
    print("your generated password is :",password)
if __name__=="__main__":
    main()