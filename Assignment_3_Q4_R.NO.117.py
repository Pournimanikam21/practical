# Budget Analysis

# Write a program that asks the user to enter the amount that he or she has budgeted for a month. A loop should then prompt the user to enter each of his or her expenses for the month, and keep a running total. when the loop finishes, the program should display the amount that the user is over or under budget.

# Pournima Kiran Nikam.

# FY B 

# Roll_no 117

budget = float(input('Enter your monthly budget :'))
total_expenses = 0
choice = 1

while choice == 1:
    expenses = float(input('Enter your expenses :'))
    total_expenses = total_expenses + expenses

    choice = input(input('Do you want add one more expenses (1 for Y and 0 for N):'))

balance = budget - total_expenses

if balance >= 0:
    print('under budget, your balance is', balance)
else:
    print('Over budget, your balance is',balance)
