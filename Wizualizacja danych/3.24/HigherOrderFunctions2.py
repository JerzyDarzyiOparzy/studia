from scipy.integrate import quad
"""print(lambda a: a)
print(lambda a: 2 * a)
print((lambda a: 2 * a))
print((lambda a: 2 * a)(10))
print((lambda a: 2 * a)(20))
print((lambda x, y: x + y)(10, 20))
print((lambda x, y, z: (x + y) * z)(10, 20, 2))
print(type(lambda x, y: x + y))
"""


# Without lambda
"""
def f(x):
    return x * x


y, abserr = quad(f, a=0, b=2)
print("Int f(x)=x^2 from 0 to 2 = {:f} +- {:g}".format(y, abserr))
"""

# With lambda
y, abserr = quad(lambda x: x * x, a=0, b=2)
print("Int f(x)=x^2 from 0 to 2 = {:f} +- {:g}".format(y, abserr))
