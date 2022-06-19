#include <stdio.h>
#include <stdlib.h>

struct Biegacz
{
    char *imie;
    int rekord;
};

struct Biegacz najlepszy(struct Biegacz* tab, int n)
{
    int i = 0;
    int naj = tab[0].rekord;
    int indx = 0;
    for(i=0; i<n; i++)
    {
        if(tab[i].rekord < naj)
        {
            naj = tab[i].rekord;        // Problem: Podstawia naj jako 0, zamiast pozadana liczba
            indx = i;
        }
    }
    return tab[i];
}

int main()
{
    int n = 3;
    struct Biegacz tab[n];
    tab[0].imie = "Marcel";
    tab[0].rekord = 3;

    tab[1].imie = "John";
    tab[2].rekord = 2;

    tab[2].imie = "Anastasia";
    tab[2].rekord = 1;
    struct Biegacz best = najlepszy(tab, n);
    printf("Imie: %s, rekord: %d\n", best.imie, best.rekord);
    return 0;
}
