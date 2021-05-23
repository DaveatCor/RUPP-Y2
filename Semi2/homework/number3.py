# 1) SHow number id odd or even

# Input N
# number = input("Input number: ")

# if (int(number) / 2) == 0:
#     print("Even")
# else :
#     print("Odd")

# ---------------------
# 2) Convert String 

# str = "Pyhton Programming Is FUN"
# print(str.lower())

# ---------------------
# 3) Make Calculator
sum = 0

while(1):

    num1 = input("Input first number: ")
    num2 = input("Input second number: ")
    string = input("Choose operator (+, -, *. /) = ")
    print(string)
    if (string != '+' and string != '-' and string != '*' and string != '/' ):
        print('Wrong input')
    else:
        num1 = int(num1)
        num2 = int(num2)
        if (string == '+'): sum = num1 + num2
        elif (string == '-'): sum = num1 - num2
        elif (string == '*'): sum = num1 * num2
        elif (string == '/'): sum = num1 / num2
        print(sum)
        break

# ---------------------
# 4) Find max of two number and n number
# num1 = input("Input first number: ")
# num2 = input("Input second number: ")

# max = None

# if (num1 > num2):
#     max = num1
#     print("Max is number1 = ", num1)
# else:
#     max = num2
#     print("Max is number2 = ", num2)
    

