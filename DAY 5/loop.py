# Looping Statements: Automate Repetitive Tasks and Reduce Redundandancies
# In Python we have while loop and for loop
# 1. While: Execute a block of code provided that a condition is True
# 2. For : Iterating Sequence Datatypes e,g list, dictionary etc to extract information and process them

# WHILE LOOP
#A while loop has 3 componets
# a) The start: in code below we have started at Zero
# b)  The start is normall stored in a variable
# c( the limit (end:in the code the looping ends with 4)
# condition is placed to ensure the the count does not exceed 4
# The step(increment/decrement): the program increment byy 1
# This ensure that the proceed to the next iteration
 #syntax
count =0
while count < 6:
    print (count)
    count=count + 1
    #count += 1 (shortcut)
    
# delimiter
print('=============')

#print from 4 upto 10
count = 4
while count < 10:
    print(count)
    count=count + 2
print("==========")

# print  even number between 6 upto 14
count = 6
while count < 14:
    print(count)
    count = count + 2
    
print("==========")
    
#Decrement operation
#print numbers from 20 upto 12
count = 20
while count >= 12:
    print(count)
    count -= 1
    
    
#Break & continue statements
