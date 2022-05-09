#include <stdio.h>
#include <stdlib.h>

int euklides(int n, int m)
{
    if (n == m) return n;
    if (n > m)
        return euklides(n -= m, m);
    return euklides (n, m -= n);
}

int main()
{
    int n,m;
    printf("Podaj dwie dodatnie liczby calkowite\n");
    scanf("%i %i",&n,&m);
    if (n<1)
        printf("Liczba nie jest dodatnia\n");
    else
        printf("%i",euklides(n,m));
    return 0;
}
