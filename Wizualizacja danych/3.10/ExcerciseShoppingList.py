fin = open('shopping.txt', 'tr')
lines = fin.readlines()
fin.close()

fout = open('shopping_cost.txt', 'tw')
for line in lines:
    words = line.split()
    itemname = words[0]
    number = int(words[1])
    cost = float(words[2])
    totalcost = number * cost
    fout.write("{:20} {}\n".format(itemname, totalcost))
fout.close()
