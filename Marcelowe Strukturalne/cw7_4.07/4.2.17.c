#include <stdio.h>
#include <stdlib.h>

double* foo(int n, double tab[])
{
    double *tab2 = malloc(n*sizeof(double));
    for (int i=0;i<n;i++)
    {
        tab2[i] = tab[i];
    }
    return tab2;
}

int main()
{
    int n = 5;
    double *tab = malloc(n*sizeof(double));
    tab[0] = 4;
    tab[1] = -21;
    tab[2] = 37;
    tab[3] = -5;
    tab[4] = 2;
    printf("Wskaznik do nowej tabeli: %p", foo(n, tab));
    return 0;
}
