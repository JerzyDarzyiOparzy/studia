"""Stos/Stack[eng]"""
q = []


def add(name):
    q.append(name)


def next():
    return q.pop()


def show():
    return q


def length():
    return len(q)


add("Poot")
add("Spencer")
add("Here")
print(next())
print(show())
print(length())
add("Steve")
add("Ronald")
add("Skoll")
print(next())
print(show())
print(length())
