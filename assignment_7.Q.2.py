#   Write a Python program that does the following:

#    Create a dictionary (with user input):
#        Ask the user how many students' data they want to enter.
#        For each student, ask the user to enter the student's name and percentage.
#        Store the student's name as the key and their percentage as the value in a dictionary.
#    Get user input (for search):
#        After creating the dictionary, ask the user to enter a student's name to search for.
#    Display the percentage:
#        If the entered name is found in the dictionary, display the student's percentage.
#        If the entered name is not found in the dictionary, display a message like "Student name not found."

# Pournima Kiran Nikam.

# FY B

# Roll No. 117

count = int(input('Number of students : '))
records = {}

for student in range(count):
    name = input('Enter name of the student : ')
    percentage = float(input('Enter the percentage of the student : '))
    records[name] = percentage

name = input('Enter name to search in the dictionary :')

if name in records:
    print('Name is found in the dictionary. Percentage:',records[name])

else:
      print('Students name not found.')
     
    
