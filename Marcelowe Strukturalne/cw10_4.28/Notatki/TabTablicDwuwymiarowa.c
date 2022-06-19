#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    tab[0] = (int*) malloc(sizeof(int)*3);
    tab[1] = (int*) malloc(sizeof(int)*3);
    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = -3;
    *(*(tab+0)+2) = 4;
    *(*(tab+1)+0) = 5;
    *(*(tab+1)+1) = -7;
    *(*(tab+1)+2) = 2;
    printf("Wartosci:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d, %d] = %d\n", i, j, *(*(tab+i)+j));
        }
    }
    printf("Adresy:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d, %d] = %p\n", i, j, *(tab+i)+j);
        }
    }
    for(int i=0;i<2;i++)
    {
        printf("Adres[%d] = %p\n", i, *(tab+i));
        printf("Adres[%d] = %p\n", i, tab+i);
    }
    printf("Adres tab %p\n", tab);
    printf("%Iu\n", sizeof(int));
    printf("%Iu\n", sizeof(int*));
    printf("%Iu\n", sizeof(int**));
    return 0;
}
