def print_f_table(f):
    for i in range(6):
        x = i * 0.5
        print("{} {}".format(x, f(x)))  # szablon na funckje


def square(x):  # funkcja uzywana do szablonu
    return x ** 2


def cubic(x):
    return x ** 3


print("Square"), print_f_table(square)
print("Cubic"), print_f_table(cubic)
