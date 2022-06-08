def sum(xs):
    s = 0
    for i in range(len(xs)):
        s = s + xs.pop()
    return s


xs = [10, 20, 30]

print("xs = {};    ".format(xs), end="")
print("sum(xs) = {};    ".format(sum(xs)), end="")
print("xs = {};    ".format(xs))

"""Efekt uboczny tej funkcji jest taki ze tabela sprawdzana zostaje usunięta"""

"""Sa dwa sposoby na naprawe"""


def sum(xs1):
    s = 0
    for i in range(len(xs1)):
        s = s + xs1[i]
    return s


"""Najlepsze podejscie w Python"""


def sum(xs2):
    s = 0
    for elem in xs2:
        s = s + elem
    return s
