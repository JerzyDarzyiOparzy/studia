#include <stdio.h>
#include <stdlib.h>

int potega(int liczba)
{
    int pow = 1;
    for (int i = 0; i<liczba; i++)
        pow *= 2;
    return pow;
}
int main()
{
    int liczba;
    printf("Podaj liczbe nieujemna.\n");
    scanf("%i",&liczba);
    if (liczba<0)
        printf("Liczba jest ujemna.\n");
    else
    {
        printf("%i\n",potega(liczba));
    }
    return 0;
}
