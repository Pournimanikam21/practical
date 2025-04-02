# Write a function called multiply that takes two keyword arguments num1 and num2 . Give num2 a default value of 2. The function should return the product of num1 and num2 .

# Pournima Kiran Nikam.
# FY B
# Roll No. 117

def multiply(num1,num2 = 2):
    mul = num1 * num2
    return mul 

number1 = int(input('Enter the number1 : '))
number2 = int(input('Enter the number2 : '))

mul = multiply(num2 = number2, num1 = number1)
print('multiplication of',number1, 'and',number2,'is',mul)

mul = multiply(num1 = number1)
print('multiplication of',number1,'and number2 is 2',mul)


