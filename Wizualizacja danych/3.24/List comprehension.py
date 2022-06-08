import math

print([2 ** i for i in range(10)])

print([x ** 2 for x in range(10)])

print([x for x in range(10) if x > 5])

xs = [i for i in range(10)]
print(xs)

ys = [x ** 2 for x in xs]
print(ys)

xss = [0.1 * i for i in range(5)]
print(xss)
yss = [math.exp(x) for x in xss]
print(yss)

words = 'The quick brown fox jumps over the lazy dog'.split()
print(words)

stuff = [[w.upper(), w.lower(), len(w)] for w in words]
for i in stuff:
    print(i)

# List comprehension with conditional

print([i for i in range(10)])
print([i for i in range(10) if i > 5])
print([i for i in range(10) if i ** 2 > 5])
