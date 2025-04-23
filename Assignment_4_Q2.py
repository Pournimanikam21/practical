# Write a program to calculate the total and average scores for each student's marks. You should take the total number of students and number of subjects per student from the user.

# Pournima Kiran Nikam.
# FY B
# Roll No - 117

no_of_students = int(input('Enter the number of students:'))
no_of_subjects = int(input('Enter the number of subjects:'))
total = 0

for students in range(no_of_students):
   total = 0
   for subjects in range(no_of_subjects):              
         marks = int(input('Enter the marks for this subjects:'))
         total = total + marks
    percentage = total / no_of_subjects
    print('total:',total,'and percentage:',percentage)


