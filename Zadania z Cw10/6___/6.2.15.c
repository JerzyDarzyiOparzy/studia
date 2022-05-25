#include <stdio.h>
#include <stdlib.h>

int sumatab(int n, int tab[n][100][100])
{
    int sum = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<100; j++)
            for(int k=0; k<100; k++)
                sum += tab[i][j][k];
    return sum;
}

int main()
{
    int n = 5;
    int tab[n][100][100];
    printf("%d\n", sumatab(n, tab));
    return 0;
}
