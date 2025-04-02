# Write a function called is_positive that takes one argument (a number) and returns True if the number is greater than 0, and False otherwise.

# Pournima Kiran Nikam.
# FY B
# Roll No.117

def is_positive(number):
    if number > 0:
        return True
    else:
        return False

num = float(input('Enter a number : '))

if is_positive(num):
    print(True)

else:
    print(False)

