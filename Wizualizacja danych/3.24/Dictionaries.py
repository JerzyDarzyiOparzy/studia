# Slownik to inaczej tablica assycyjna lub tablica haszująca (dictionaries = associative arrays || hash tables).
"""Pusty slownik tworzymy uzywajac braces."""
d = {}

"""Dodajemy klucz (today) oraz wartosc (22 deg C), przyklad slownika zapamietujacy temperataure."""
d['today'] = '22 deg C'
d['yesterday'] = '19 deg C'

"""d.keys() zwraca wszystkie klucze."""
print(d.keys())

"""Podajemy klucz by otrzymac wartosc."""
print(d['today'])

order = {}
order['Peter'] = 'Pint of bitter'
order['Paul'] = 'Half pint of Hoegarden'
order['Mary'] = 'Gin Tonic'

for person in order.keys():
    print("{} requests {}".format(person, order[person]))

dic = {}
dic['Andy C'] = 'room 1031'
dic['Ken'] = 'room 1027'
dic['Hans'] = 'room 1033'

for key in dic.keys():
    print("{} works in {}".format(key, dic[key]))
