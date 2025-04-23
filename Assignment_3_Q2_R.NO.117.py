# Bugs Collector

# A bug collector collect bugs everyday for seven days.Write a program to find the total number of bugs collect during the seven days. The loop should asks for the number of bugs collected for each day, and when the loop is finished the program should display the total number of bugs collected.

# Pournima Kiran Nikam.

# FY B

# Roll_no 117

total_bugs = 0
for day in range(1, 8):
    bugs_collected = int(input('Enter the number of bugs collected on day :'))
    total_bugs += bugs_collected
print('The total number of bugs collected during the seven day is:',total_bugs)
