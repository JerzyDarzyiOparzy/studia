#include <stdio.h>
#include <stdlib.h>

double* foo(int n)
{
    double *tab = malloc(n*sizeof(double));
    return &tab[0]; //nawias kwadratowy i ampersand jest zbedny, i tak zwroci pierwszy adres.
}

int main()
{
    int n = -1;
    while (n<0)
    {
        printf("Podaj liczbe calkowita dodatnia\n");
        scanf("%d", &n);
    }
    printf("Wskaznik do nowej tabeli: %p \n", foo(n));
    return 0;
}
