#Python Functions
#Its reusable blocks of code designed to perform a specific task
# function characteristics
    # code reusability
    # modularity (break down problem to smaller maanageable part)
    # Encapsulation (hide implementation detail)
    # Parameter & Argument(function accept input (parameter) and return output)
    # Return statement (must have return statement)
    
# Type of Function
    # Built in function (already come with compliler e.g print function)
    # User-defined function(created by programmer use of def word)
    # Lambda functions (without a name for short operation)
    # Recursive Function( calls itself to solve smaller subproblems of a task)

# Components of a function
    # Declaring a function using the def keyword
    # Function call:Executing a function by using its name followed by parentheses
    # Parameters: Variables that accept values when a function is called.
    # Arguments: Values passed to a function when calling it.
    # Return Statement: Specifies the output of a function.
    
# Function Arguments:
    # Positional Arguments: Passed in order and assigned based on position.
    # Keyword Arguments: Passed with parameter names, making the order irrelevant.
    # Default Arguments: Assigned default values if no argument is provided.
    # Variable-Length Arguments (*args, **kwargs): Used to pass multiple positional or keyword arguments dynamically.
    
# User-defined (custom function)
# its shoud be defined and called (invoking) when you want to excute
# syntax
# Declaring(define) a function

def generate_full_name():
    first_name = "Sandy"
    space = ''
    last_name = "Rotich"
    full_name = first_name + space + last_name
    print(full_name)

# calling defined function

generate_full_name()