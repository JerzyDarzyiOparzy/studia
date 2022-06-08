import math


def make_adder(y):
    def adder(x):
        return x + y
    return adder


add42 = make_adder(42)
addpi = make_adder(math.pi)
print(add42(2))
print(addpi(-3))
