#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(sizeof(int)*m);
    }
    return tab;
}

void zwolnij(int ** tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        free(*(tab+i));
    }
    free(tab);

}

int main()
{
    int ** wsk = alokuj(4,5);
    zwolnij(wsk,4,5);
    return 0;
}
