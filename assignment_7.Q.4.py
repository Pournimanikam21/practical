 # Given two sets, set1 = {10, 20, 30, 40, 50} and set2 = {30, 60, 70}, write Python code to perform the following operations and print the results:

#    Union of set1 and set2
#    Intersection of set1 and set2
#    Difference  of set1 from set2 
#    Symmetric difference of set1 and set2

# Pournima Kiran Nikam.

# FY B

# Roll No. 117

myset1 = set([10, 20, 30, 40, 50]) 
myset2 = set([30, 60, 70])

print('Union :', myset1.union(myset2))

print('Intersection:', myset1.intersection(myset2))

print('Difference:', myset1.difference(myset2))

print('Symmetric Difference :',myset1.symmetric_difference(myset2))
