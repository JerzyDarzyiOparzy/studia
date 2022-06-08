import operator
from functools import reduce


def f(x, y):
    print("Called with x={}, y={}".format(x, y))
    return x + y


print(reduce(f, [1, 3, 5], 0))
print(reduce(f, [1, 3, 5], 100))


def fm(x, y):
    print("Called with x={}, y={}".format(x, y))
    return x * y


print(reduce(fm, [1, 3, 5], 1))

print(reduce(f, "test", ""))

"""
def f(x, y):
    return x + y


print(reduce(f, range(10), 0)

Can also be written as:
"""
print(reduce(operator.add, range(10), 0))
"""
Could also use:
"""
print(reduce(lambda x, y: y + y, range(10), 0))
"""
But use of operator module is preferred (faster)
"""