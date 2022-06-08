"""Tuples(krotki) to stala lista"""
t = (3, 4, 50)
print(t)
print(type(t))

"""Tuples are defined by the comma, not the parenthesis"""

a = 10, 20, 30
print(a)
print(type(a))

"""The parenthesis are optional, but should be written anyway for readability"""

print(t[1])
print(t[:-1])

"""Tuples are used in cases where we want to make sure, that a set of objects doesn't change"""
"""Tuples allow to assign several variables in one line (known as tuple packing and unpacking)"""
s, y, z = 0, 0, 1
print(s, y, z)
"""This allows instantaneous swap of values"""
a = 1
b = 2
print(a, b)
a, b = b, a
print(a, b)


def f(x):
    return x**2, x**3


a, b = f(2)
print(a, b)

"""a = 'hello world'
a[4] = 'x'
Wystapi blad, tuple jest immutable, nie bedzie mozna zmienic go
b = a[0:3] + 'x' + a[4:]
print(a)
Okrezna droga do zmiany tuple, wycinamy i wstawiamy
...
does not work???"""

"""Conversions"""

print(tuple([1, 4, 'dog']))
print(list((10, 20, 30)))
print(list(range(5)))
print(iter([1, 2, 3]))
