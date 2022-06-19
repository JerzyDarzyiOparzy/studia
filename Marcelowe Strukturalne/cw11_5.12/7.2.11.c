#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    int a;
    float b;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj()
{
    struct Dane temp;
    printf("Podaj 0 dla calkowitej, 1 dla wymiernej.\n");
    scanf("%d", &temp.tp);

    if (temp.tp == 0)
    {
        printf("Podaj liczbe calkowita.\n");
        scanf("%d", &temp.zaw.a);
    }
    else if (temp.tp == 1)
    {
        printf("Podaj liczbe wymierna.\n");
        scanf("%f", &temp.zaw.b);
    }
    else
        printf("Liczba nie jest ani 1 ani 0.\n");

    return temp;
};

void wyswietl(struct Dane arg)
{
    if (arg.tp == 0)
    {
        printf("%d\n", arg.zaw.a);
    }
    else if (arg.tp == 1)
    {
        printf("%f\n", arg.zaw.b);
    }
    else
        printf("Liczba nie jest ani 1 ani 0\n");
}

int main()
{
    struct Dane zmienna = wczytaj();
    wyswietl(zmienna);
    return 0;
}
