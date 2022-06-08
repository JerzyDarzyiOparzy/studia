def filo():
    q = []

    def push(name):
        q.append(name)

    def pop():
        return q.pop()

    def show():
        print(q)

    def length():
        return len(q)

    return push, pop, show, length


push, pop, show, length = filo()

push("b")
push("a")
push("c")
pop()
show()