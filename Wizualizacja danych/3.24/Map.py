import math


def f(x): return x ** 2


print(map(f, [0, 1, 2, 3, 4]))
print(list(map(f, [0, 1, 2, 3, 4])))
print(list(map(lambda x: x ** 2, [0, 1, 2, 3, 4])))

print(list(map(math.exp, [0, 0.1, 1.])))
