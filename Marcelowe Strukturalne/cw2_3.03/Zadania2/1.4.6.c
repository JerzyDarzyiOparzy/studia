#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,wynik=1;
    printf("Podaj liczbe calkowita wieksza od 2\n");
    scanf("%i",&n);
    if(n<=2)
    {
        printf("Liczba nie jest wieksza od 2\n");
    }
    else
    {
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0) {
            wynik *= i;
        }
    }
    printf("%i",wynik);
    }
    return 0;
}
