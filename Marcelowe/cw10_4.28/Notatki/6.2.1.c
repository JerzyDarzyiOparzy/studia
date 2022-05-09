#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int m)
{
    int **tab = (int **) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        *(tab+i) = malloc(sizeof(int)*m);
    }
    return tab;
}

int main()
{
    int ** wsk = foo(4, 5);
    printf("%p\n", wsk);
    return 0;
}
