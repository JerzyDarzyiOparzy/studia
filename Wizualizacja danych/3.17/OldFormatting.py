import math
p = math.pi
print("%f" % p)  # format p as float
print("%d" % p)  # format p as integer
print("%e" % p)  # format p in exponential style
print("%g" % p)  # format using fewer characters
print("The value of pi is approximately %f" % p)
print("%d is my preffered number" % 42)
print("%d times %d is %d" % (10, 42, 10 * 42))
print("pi=%f and 3*pi=%f is approx 10" % (p, 3*p))
print("%f" % 3.141)  # default width and precision
print("%10f" % 3.141)  # 10 characters long
print("%10.2f" % 3.141)  # 10 long, 2 post-decimal digits
print("%.2f" % 3.141)  # 2 post-decimal digits
print("%.14f" % 3.141)  # 14 post-decimal digits
AU = 149597870700  # astronomical unit [m]
print("%f" % AU)  # line 1 in table
"""
%f  floating point
%e  exponential notation
%g  shorter of %e or %f
%d  ingerer
%s  str()
%r  repr()
"""
print("My pi = %.2f." % math.pi)
