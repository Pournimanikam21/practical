# Write a Python program that does the following:

#    Create an empty set called my_set. Add the elements 5, 10, and 15 to the set.
#    Try to add the element 10 again. What happens?
#    Remove the element 10 from the set.
#    Try to remove the element 20 from the set. What happens?

# Pournima Kiran Nikam.

# FY B

# Roll No. 117

my_set = set()
my_set.add(5)
my_set.add(10)
my_set.add(15)
print(my_set)

# Set do not allow duplicate elements.
my_set.add(10)
print(my_set)

# Remove element 10 from set.
my_set.remove(10)
print(my_set)

# Remove element 20 then show key error.
my_set.remove(20)
print(my_set)
