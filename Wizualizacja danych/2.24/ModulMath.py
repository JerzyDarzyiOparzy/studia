import math

print(math.sqrt(4))
print(math.pi)
print(dir(math))
print(help(math.sqrt))

# Three (good) options to access a module:
# 1. Use the full name
# import math
# print(math.sin(0.5))
# print(math.pi)
# 2. Use some abbreviation
# import math as m
# print (m.sin(0.5))
# print (m.pi)
# 3. import all objects we need explicitly
# from math import sin, pi
# print(sin(0.5))
# print(pi)

# Remember to use float values while dividing to avoid problems, ex. while dividing 1/2 use 1.0/2 instead, so instead of 0 it results in 0.5.
# You can use 1//2 to get C type division instead, 1//2 will result in 0.

b = 2
print(float(b))
