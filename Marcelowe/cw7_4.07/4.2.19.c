#include <stdio.h>
#include <stdlib.h>

int* foo(int n, int tab1[])
{
    int m;
    for (int i=0;i<n;i++)
        if(tab1[i]!=0)
            m += 1;

    int *tab2 = malloc(m*sizeof(int));
    for (int i=0;i<n;i++)
    {
        if (tab1[i]!=0)
        {
            tab2[i] = tab1[i];
        }
    }
    return tab2;
}


int main()
{
    int n = 5;
    int *tab1 = malloc(n*sizeof(int));
    tab1[0] = 4;
    tab1[1] = -21;
    tab1[2] = 0;
    tab1[3] = -5;
    tab1[4] = 2;
    printf("Wskaznik do nowej tabeli: %p", foo(n, tab1));
    return 0;
}
