#include<stdio.h>
#include<stdlib.h>

void foo(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]*= 2;
    }
}

int main()
{
    int n = 5;
    int tab[5]={0,1,2,3,4};
    foo(5, tab);
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    return 0;
}
