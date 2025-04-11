#   Tuple Usage


#    You are given a list of student records, where each record is a tuple containing the student's name and their score: [("Alice", 88), ("Bob", 76), ("Charlie", 92)].
#    Write a program to iterate through the list and print each student's name and score in a formatted way (e.g., "Alice: 88").
 

# Pournima Kiran Nikam.

# FY B

# Roll No. 117

student_records = [("Alice", 88), ("Bob", 76), ("Charlie", 92)]

for record in student_records:
    print(record[0], ':', record[1])

