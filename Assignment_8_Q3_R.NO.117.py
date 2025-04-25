# Generate Login ID 

# Write a python program to generate login ID for a user based on his first name, last name, and PRN number.

# Login ID should contain first three letters of first name, first three letters of last name and last three digits of PRN number. Login ID should be in all lower case. 

# Example: 

# First Name : Rohan
# Last Name : Patil
# PRN : 123431
# Login ID will be - rohpat431 

# Pournima Kiran Nikam.

# FY B
# Roll No. 117

first_name = input("Enter first name :")
last_name = input("Enter last name :")
prn = input("Enter the PRN :")

set1 = first_name[:3]
set2 = last_name[:3]
set3 = prn[-3:]

login_id = set1 + set2 + set3
login_id = login_id.lower()

print("Login ID :", login_id)
