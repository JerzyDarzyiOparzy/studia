#include <stdio.h>
#include <stdlib.h>

int* allocate()
{
    int *tab = malloc(sizeof(int)*4);
    tab[0] = 5;
    tab[1] = 2;
    tab[2] = -3;
    tab[3] = -5;
    for(int i=0;i<4;i++)
        printf("Tab[%d] = %d\n", i, tab[i]);
    return &tab[-1];
}

int main()
{
    printf("Adres to %d\n", allocate());
    return 0;
}
