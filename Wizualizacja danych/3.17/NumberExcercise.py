fin = open('numbers.txt', 'tr')
lines = fin.readlines()
fin.close()

fout = open('shopping_cost.txt', 'tw')
for line in lines:
    numbers = line.split()
    sum =
    fout.write("{:20} {}\n".format(itemname, totalcost))
fout.close()

"""Not finished"""