#include <stdio.h>
#include <stdlib.h>

void wypiszwiersz(int n, int m, int **tab)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 2;
    int m = 3;
    int **tab = (int**) malloc(sizeof(int*)*n);
    tab[0] = (int*) malloc(sizeof(int)*m);
    tab[1] = (int*) malloc(sizeof(int)*m);
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 1;
    *(*(tab+1)+0) = 4;
    *(*(tab+1)+1) = 8;
    *(*(tab+1)+2) = 4;
    wypiszwiersz(n, m, tab);
    return 0;
}
