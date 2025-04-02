# Write a function called add_numbers that takes two positional arguments and returns their sum.

# Pournima Kiran Nikam.
# FY B
# Roll No. 117

def add_numbers(num1, num2):
    add = num1 + num2
    return add

number1 = int(input('Enter the number1 : '))
number2 = int(input('Enter the number2 : '))

addition = add_numbers(number1, number2)
print('Addition of',number1,'and',number2,'is',addition)
