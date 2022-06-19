#include <stdio.h>
#include <stdlib.h>

int rekur(int n)
{
    if (n<=1)
        return 1;
    return rekur(n-1)+n;
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita\n");
    scanf("%i",&n);
    if (n<0)
        printf("Liczba jest ujemna\n");
    else
        printf("%i",rekur(n));
    return 0;
}
