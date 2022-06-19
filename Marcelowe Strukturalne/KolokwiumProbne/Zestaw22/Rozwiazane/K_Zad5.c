#include <stdio.h>
#include <stdlib.h>

void triple(int n, int tab[])
{
    for(int i=0;i<n;i++)
        if(tab[i]%2==0)
            tab[i]=tab[i]*3;
}

void write(int n, int tab[])
{
    for(int i=0;i<n;i++)
        printf("%d\n",tab[i]);
}

int main()
{
    int n = 5;
    int tab[5] = {1, 3, 2, 6, 5};
    int m = 7;
    int tab2[7] = {4, 6, 2, 1, 12, 5, 64};
    printf("Przyklad pierwszy:\n");
    triple(n, tab);
    write(n, tab);
    printf("Przyklad drugi:\n");
    triple(m, tab2);
    write(m, tab2);
    return 0;
}
