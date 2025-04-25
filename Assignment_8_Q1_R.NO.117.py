# Write a program to count the number of times the letter T (uppercase of lowercase) appears in a string. 

# Pournima Kiran Nikam.

# FY B
 
# Roll No. 117

string = input('Enter any string : ')

count = 0
for ch in string:
    if ch == "T" or ch == "t":
        count = count + 1

print("Number of 't' or 'T' in the given string is ", count)        

