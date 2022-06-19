#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b = 1;
    printf("Podaj liczbe calkowita nieujemna\n");
    scanf("%i",&a);
    if (a<0)
    {
        printf("Liczba jest ujemna");
    }
    else
    {
        for (int i = 1; i<=a; i++)
        {
            b *= i;
        }
    }
    printf("%i",b);
    return 0;
}
