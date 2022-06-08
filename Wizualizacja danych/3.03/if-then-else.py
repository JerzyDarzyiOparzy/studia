x = 30
if x > 30:
    print("Yes")
else:
    print("No")


def slength1(s):
    if len(s)>10:
        ans = 'very long'
    else:
        ans = 'normal'
    return ans


print(slength1("Hello"))
print(slength1("HelloHello"))
print(slength1("Hello Again"))


def slength2(s):
    if len(s) == 0:
        ans = 'empty'
    elif len(s) > 10:
        ans = 'very long'
    elif len(s) > 7:
        ans = 'normal'
    else:
        ans = 'short'
    return ans

print(slength2(""))
print(slength2("Hello"))
print(slength2("HelloHello"))
print(slength2("Hello Again"))