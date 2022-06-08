def f():
    y = "I am local y"
    print(x)
    print(y)


x = "I am global x"
y = "I am global y"
f()
print("Back in main:")
print(y)
