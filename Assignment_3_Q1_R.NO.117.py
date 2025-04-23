# Sum of Number

# Write a program with a loop that asks the user to enter a series of positive numbers. The user should enter a negative number to signal the end of the series. After all the positive numbers have been entered, the program should display their sum.

# Pournima Kiran Nikam.

# FY B

# Roll_no 117

total_sum = 0
while True :
    num = int(input('Enter a positive number(or a negative number to end):'))
    if num < 0:
        break
    total_sum += num
print('The sum of the positive numbers is:',total_sum)    
