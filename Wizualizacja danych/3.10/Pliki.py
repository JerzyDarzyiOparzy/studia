"""Write"""
f = open('test.txt.', 'w')
f.write("first line\nsecond line")
f.close()

"""Read"""
f = open('test.txt', 'r')
lines = f.readlines()
f.close()
print(lines)

print("SeparatorOne")

f = open('test.txt', 'r')
data = f.read()
f.close()
print(data)

print("SeperatorTwo")

f = open('test.txt', 'r')
for line in f:
    print(line, end='')


f.close()

c = 'This is my string'
print(c.split())
print(c.split('i'))
