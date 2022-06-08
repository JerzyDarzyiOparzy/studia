def palindrom(n):
    for i in range(0, int(len(n)/2)):
        if n[i] != n[len(n)-i-1]:
            return False
    return True


n = input("Podaj liczbe calkowita: ")
ans = palindrom(n)
if ans:
    print("Jest to palindrom")
else:
    print("Nie jest to palindrom")
