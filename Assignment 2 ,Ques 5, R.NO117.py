# Write a python program that calculates the electricity bill based on the number of units used.

# Up to 100 units = 5rs per unit.
# 101 to 300 units = 7rs oer unit.
# Above 300 units = 10rs per unit.

# Pournima Kiran Nikam.

# FY B

# Roll No 117

units = int(input('Enter the number of units used :'))

if units <= 100:
    bill = units * 5  #first 100 units Rs 5 per unit.
elif units > 100 and units <= 300:
    bill = (100 * 5) + ((units - 100) * 7)
else:
    bill = (100 * 5) + (200 * 7) + ((units - 300) * 10)
print('You have used',units,'units and your electricity bill is',bill)
