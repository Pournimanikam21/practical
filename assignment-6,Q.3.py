# Write a program to find the sum of all the numbers in the list.

# Pournima Kiran Nikam.

# FY B

# Roll No. 117

numbers = []

count = int(input('Number are in the list'))

for i in range (count):
    num = int(input('Enter the numbers'))
    numbers.insert(i,num)

total = 0

for num in numbers:
    total = total + num

print('Total is',total)

 
