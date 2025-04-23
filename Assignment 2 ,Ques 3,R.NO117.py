# Write a Python program that reads a number and displays the appropriate day. For example, if the input is 10, the output is calculated as 10 % 7 = 3 output: Thursay).

# Pournima Kiran Nikam.

# FY B.

# Roll no 117.

Day =int(input('Enter the number'))

n=Day%7

if n == 0:
   print('Monday')
elif n==1:
   print('Tuesday')
if n == 2:
   print('Wednesday')
if n == 3:
    print('Thursday')
if n == 4:
    print('Friday')
if n == 5:
    print('Saturday')
if n == 6:
    print('Sunday')


