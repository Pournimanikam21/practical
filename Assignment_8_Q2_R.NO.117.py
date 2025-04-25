# Date

# Write a program which takes date as an input in the format DD / MM / YYYY (separated by /), and display each part of the date - DAY, MONTH, and YEAR. (use String split method)

# Pournima Kiran Nikam. 

# FY B

# Roll No. 117

date = input("Enter any date in the format DD/MM/YYYY :")

date_details = date.split('/')

print('Day :',date_details[0])
print('Month :',date_details[1])
print('Year :',date_details[2])



