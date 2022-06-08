def skip13(a, b):
    result = []
    for k in range(a, b):
        if k == 13:
            pass
        else:
            result.append(k)
    return result


print(skip13(9, 16))


def range_double(a, b):
    result = []
    for k in range(a, b):
        result.append(k*2)
    return result


print(range_double(3, 12))


