# Example 1
def mysum(a, b):
    """Return the sum of parameters a and b."""
    return a + b

# main program starts here
print("The sum of 3 and 4 is", mysum(3, 4))

# Example 2
def plus42(n):
    """Add 42 to n and return"""        #docstring
    l = n + 42                          #body of function
    return l

a = 8
b = plus42(a) # not part of function definition 
# after execution, b carries the value 50, and a 8.   

# Example 3
def print42():
    print(42)

def return42():
    return(42)

print(print42())
print(return42())
print(type(print42))