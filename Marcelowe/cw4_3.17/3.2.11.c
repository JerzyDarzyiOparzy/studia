#include <stdio.h>
#include <stdlib.h>


int* alokacja(int n)
{
    return malloc(sizeof(int)*n);
}


int main()
{
    int n;
    printf("Podaj liczbe dodatnia calkowita\n");
    scanf("%d", &n);

    if (n<0)
        printf("Liczba n nie jest dodatnia");

    else
        printf("Alokowana pamiec to %p\n", alokacja(n));

    return 0;
}
