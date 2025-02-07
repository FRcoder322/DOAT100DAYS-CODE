#Python bool() Function
# use of true & False
# Returns False as x is None
x = None
print(bool(x))

# Returns False as x is an empty sequence
x = ()
print(bool(x))

# Returns False as x is an empty mapping
x = {}
print(bool(x))

# Returns False as x is 0
x = 0.0
print(bool(x))

# Returns True as x is a non empty string
x = 'lets learn'
print(bool(x))



# Boolean OR Operator
# its return True value if any of the input is True else Return False
a=4
b=6
c=2
if a>b or b< c:
    print("True")
else:
    print(False)
# Boolean AND Operator
if a and b and c:
    print("True")
else:
    print("True")

# Boolean Not Operator
a = 0

if not a:
    print("False")
else :
    print(True)

#Boolean == (equivalent) and != (not equivalent) Operator
a = 0
b = 1

if a == 0:
    print(True)
    
if a == b:
    print(True)
    
if a != b:
    print(True)