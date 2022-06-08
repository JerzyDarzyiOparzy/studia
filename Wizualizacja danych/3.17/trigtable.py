import math
funcs = (math.sin, math.cos)
for f in funcs:
    for x in [0, math.pi/2]:
        print("{}({:.3f}) = {:.3f}".format(f.__name__, x, f(x)))
