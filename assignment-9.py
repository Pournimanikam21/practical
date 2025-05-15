#Write a program to calculate following,
#The area of a circle
#The circumference of a circle
#The area of a rectangle
#The perimeter of a rectangle

#You have to create two separate modules one for functions of circle and one for function of rectangle, and use these modules in another program.  

# Pournima Kiran Nikam.
# FY B
# Roll No. 117

import circle
import rectangle

radius = float(input("Enter the radius of the circle : "))
area = circle.area_circle(radius)
print("The area of circle is ",area)
circumference = circle.circumference_circle(radius)
print("The circumference of circle is ",circumference)

length = float(input("Enter the length : "))
breadth = float(input("Enter the bredth : "))
area =rectangle.area_rectangle(length,breadth)
print("The are of rectangle is",area)
perimeter= rectangle.perimeter_rectangle(length,breadth)
print("The perimeter of the rectangle is ",perimeter) 


