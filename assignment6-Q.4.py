# Write a program to find the largest number in the list.

# Pournima Kiran Nikam.

# FY B

# Roll No. 117
number = []
count = int(input('Number are in the list :'))

for i in range (count):
    num = int(input('Enter the any number:'))
    numbers.insert(i,num)

max = 0
for num in numbers:
    if num >= max:
        max = num

print('Max is',max)
