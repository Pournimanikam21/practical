# Write a Python program to demonstrate the use of the following functions from math module -

#    sqrt
#    ceil
#    floor
#    log
#    sin
#    cos

# Pournima Kiran Nikam.
# FY B
# Roll No. 117

import math

# sqrt() in math module. The math.sqrt() method returns the square root of a number.
number = float(input('Enter any number : '))
result = math.sqrt(number)
print('sqrt is',result)

# ceil() in math module.The math.ceil() method rounds a number UP to the nearest integer, if necessary, and returns the result.
number = float(input('Enter any number : '))
result = math.ceil(number)
print('ceil is' ,result)

# floor() in math module.The math.floor() method rounds a number DOWN to the nearest integer, if necessary, and returns the result.
number = float(input('Enter any number : '))
result = math.floor(number)
print('floor is',result)

# log() in math module. The math.log() method returns the natural logarithm of a number, or the logarithm of number to base.
number = float(input('Enter any number : '))
result = math.log(number)
print('log is', result)

# sin() in math module. The math.sin() method returns the sine of a number.
number = float(input('Enter any number : '))
result = math.sin(number)
print('sin is ',result)

# cos() on math module. The math.cos() method returns the cosine of a number.
number = float(input('Enter any number : '))
result = math.cos(number)
print('cos is ',result)
