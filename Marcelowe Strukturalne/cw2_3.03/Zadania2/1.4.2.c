#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj dwie liczby\n");
    scanf("%i%i",&n,&m);
    if(n < 0)
        printf("Liczba n jest ujemna\n");
    else if(m < 0)
        printf("Liczba m jest ujemna\n");
    else
    {
        printf("%i wielokrotnosci liczby %i\n",m,n);
        for (int i = 1; i<=m; i++)
        printf("%i\n",n*i);
    }
    return 0;
}
