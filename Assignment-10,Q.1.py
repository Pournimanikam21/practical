# Write a program to write ten names in to 'names.txt' file and read from the same file and display all ten names on the screen.

# Pournima Kiran Nikam.
# FY B
# Roll No. 117

file = open('names.txt', 'w')  # Open file in write mode

names = ['Diksha', 'Arya', 'Shreya', 'Riya', 'Neha',
         'Pranali', 'Manali', 'Neha', 'Siddhi', 'Nia']

for name in names:
    file.write(name + '\n')  # Write each name followed by newline

file.close()  # Close the file after writing


file = open('names.txt', 'r')  # Open file in read mode

for line in file:
    print(line, end='')

file.close()  
