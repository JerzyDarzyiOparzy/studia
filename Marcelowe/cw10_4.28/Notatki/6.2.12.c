#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int tab[][m])
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp += tab[i][j];
        }
    }
    return temp;
}

int foo2(int n, int m, int tab[][m])       //Mozna uzyc tylko jednej petli
{
    int temp = 0;
    for(int i=0;i<n*m;i++)
        temp += tab[0][i];
    return temp;
}

int main()
{
    int tab[2][3] = {{2,3,4},{-3,1,0}};
    printf("%d\n", foo(2, 3, tab));
    printf("%d\n", foo2(2, 3, tab));
    return 0;
}
