# Write a Python program that ask a user for their age and decides wheather they are allowed to vote (age 18 and up ). if not , show how many years are left until eligiblity.

# Pournima Kiran Nikam.

# FY B

# Roll No 117

Age = int(input('Enter the your age :'))

if Age >= 18:
    print('You are eligible for voting :')
else:
    print('You are not eligible for voting you need to vote for',18-Age,'more years to go')

