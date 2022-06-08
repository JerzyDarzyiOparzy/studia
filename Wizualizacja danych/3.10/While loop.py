x = 64
while x > 10:
    x = x // 2
    print(x)

eps = 1.0

while eps + 1 > 1:
    eps = eps / 2.0
print("Epsilon is {}".format(eps))

a = [0, 2, 4, 6]
print(a)
b = a
print(b)
print(b[1])
b[1] = 10
print(b)
print(a)
print(id(a))
print(id(b))
print(a is b)
print(a == b)

a = 1
b = 1.0
print(id(a), id(b))
print(a is b)
print(a == b)
