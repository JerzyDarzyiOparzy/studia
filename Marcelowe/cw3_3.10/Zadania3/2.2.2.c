#include <stdio.h>
#include <stdlib.h>

int silnia(int liczba)
{
    int silna = 1;
    for (int i = liczba; i>1; i--)
        silna *= i;
    return silna;
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
        printf("%i\n",silnia(liczba));
    }
    return 0;
}
