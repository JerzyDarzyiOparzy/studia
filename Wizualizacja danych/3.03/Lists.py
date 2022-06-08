print([])
print([42])
print([5, 'hello', 17.3])
print([[1, 2], [3, 4], [5, 6]])

"""Sequences"""

a = []
a.append('dog')
a.append('cat')
a.append('mouse')
print(a)
print(a[0])
print(a[1])
print(a[2])
print(a[-1])
print(a[-2])

a = ['dog', 'cat', 'mouse', [1, 10, 100, 1000]]
print(a)
print(a[0])
print(a[3])
print(max(a[0]))
print(min(a[0]))
print(a[3][0])
print(a[3][1])
print(a[3][3])

a = "hello world"
print(a[4])
print(a[4:7])
print(len(a))
print('d' in a)
print('x' in a)
print(a + a)
print(3 * a)

