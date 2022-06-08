def has_numbers(inputstring):
    return any(char.isdigit() for char in inputstring)


file = open("Lista_Zakupow.txt", "r")

output = {}

for l in file.readlines():
    (name, x, y) = l.split()
    if not has_numbers(x) or not has_numbers(y):
        continue
    output[name] = float(x) * float(y)
file.close()

fileWrite = open("zakupy.txt", "w")

content = ""
for key in output:
    content += str(key + " " + str(output[key]) + "\n")

fileWrite.write(content)
fileWrite.close()