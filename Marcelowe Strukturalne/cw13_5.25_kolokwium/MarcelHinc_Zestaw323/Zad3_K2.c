#include <stdio.h>
#include <stdlib.h>

void odwroc(int**tab, int n, int m)
{
    int * temp[m];
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<m; j++)
                temp[j] = tab[i][j];
            for(int j=0; j<m; j++)
                tab[i][j] = temp[m-j-1];
        }
    }
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*4);

    tab[0] = (int*) malloc(sizeof(int)*3);
    tab[1] = (int*) malloc(sizeof(int)*3);
    tab[2] = (int*) malloc(sizeof(int)*3);
    tab[3] = (int*) malloc(sizeof(int)*3);

    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 3;
    *(*(tab+0)+2) = -3;

    *(*(tab+1)+0) = 1;
    *(*(tab+1)+1) = 4;
    *(*(tab+1)+2) = 7;

    *(*(tab+2)+0) = -3;
    *(*(tab+2)+1) = -6;
    *(*(tab+2)+2) = 11;

    *(*(tab+3)+0) = -2;
    *(*(tab+3)+1) = 8;
    *(*(tab+3)+2) = 23;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", *(*(tab+i)+j));
        }
        printf("\n");
    }

    printf("Po odwroceniu wierszy o parzystym indeksie:\n");
    odwroc(tab, 4, 3);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", *(*(tab+i)+j));
        }
        printf("\n");
    }
    return 0;
}
