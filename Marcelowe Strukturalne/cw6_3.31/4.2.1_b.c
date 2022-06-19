#include<stdio.h>
#include<stdlib.h>

void foo(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=i;
    }
}

int main()
{
    int n;
    printf("Podaj liczbe calkowita nieujemna.\n");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Liczba mniejsza od 0.\n");
    }
    else
    {
        int tab[n];
        foo(n, tab);
        for(int i=0;i<n;i++)
        {
            printf("[%d]=%d\n", i, tab[i]);
        }
    }
    return 0;
}
