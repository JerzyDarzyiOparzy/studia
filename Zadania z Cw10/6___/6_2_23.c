#include <stdio.h>
#include <stdlib.h>

void foo(int**tab, int n, int m)
{
    int * temp=tab[n-1];
    for(int i=n-1;i>0;i--)
    {
        tab[i]=tab[i-1];
    }
    tab[0]= temp;
}

void wyswietl(int**tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%3d, ",i,j,tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*3);
    tab[0]=(int*) malloc(sizeof(int)*4);
    tab[1]=(int*) malloc(sizeof(int)*4);
    tab[2]=(int*) malloc(sizeof(int)*4);
    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 3;
    *(*(tab+0)+2) = 4;
    *(*(tab+0)+3) = 11;
    *(*(tab+1)+0) = -3;
    *(*(tab+1)+1) = 1;
    *(*(tab+1)+2) = 0;
    *(*(tab+1)+3) = -3;
    *(*(tab+2)+0) = 11;
    *(*(tab+2)+1) = 22;
    *(*(tab+2)+2) = 33;
    *(*(tab+2)+3) = 44;
    wyswietl(tab,3,4);
    foo(tab,3,4);
    wyswietl(tab,3,4);
    return 0;
}
