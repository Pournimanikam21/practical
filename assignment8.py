# Password Check

# Write a program to check whether a given password is valid or not based on the following conditions - 

#    A valid password must be at least 7 characters in length
#    Contains at least one upper case letter
#    Contains at least one lower case letter
#    Contains at least one digit

# Pournima Kiran Nikam.
# FY B
# Roll No. 117

password = input('Enter  your password :')

lenght = False
upper  = False
lower = False
digit = False

if len(password) >= 7:
    lenght = True

for ch in password:
    if ch.islower():
      lower = True 

    if ch.isupper():
      upper = True

    if ch.isdigit():
       digit = True

if lenght and lower and upper and digit:
    print('Valid password :')

else:
    print('Invalid password :')
