#include <stdio.h>
#include <stdlib.h>

void zerofill(int n, int m, int tab[][m])
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            tab[i][j]=0;
}

int main()
{
    int tab[2][3];
    zerofill(2,3,tab);
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            printf("[%d, %d] =%d\n", i, j, tab[i][j]);
    return 0;
}
