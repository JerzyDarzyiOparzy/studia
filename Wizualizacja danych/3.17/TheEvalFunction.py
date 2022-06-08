import datetime

x = 1
print(eval('x + 1'))
s = "[10, 20, 30]"
print(type(s))
print(eval(s))
print(type(eval(s)))  # eval is used for self modifying code
print("Separator")
t = datetime.datetime.now()
t_as_string = repr(t)
print(t_as_string)
t2 = eval(t_as_string)
print(t2)
print(type(t2))
print(2 == t2)
