def f():
    global x
    print(x)
    x = "I am local"
    print(x)


x = "I am global"
f()
print(x)
