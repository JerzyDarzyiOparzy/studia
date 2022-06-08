c = "The quick brown fox jumps".split()
print(c)


def len_gr_4(s):
    return len(s) > 4


print(list(map(len_gr_4, c)))
print(filter(len_gr_4, c))
print(list(filter(len_gr_4, c)))

print([s for s in c if len(s) > 4])


def is_positive(n):
    return n > 0


print(list(filter(is_positive, [-3, -2, -1, 0, 1, 2, 3, 4])))
print(list(filter(lambda n: n > 0, [-3, -2, -1, 0, 1, 2, 3, 4])))
print([x for x in [-3, -2, -1, 0, 1, 2, 3, 4] if x > 0])
