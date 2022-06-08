x = "My first look at Python was an accident"

list = x.split()
output = []

for i in list:
    if len(i) == 4 and i.startswith("l"):
        output.append(i)

print(output)
