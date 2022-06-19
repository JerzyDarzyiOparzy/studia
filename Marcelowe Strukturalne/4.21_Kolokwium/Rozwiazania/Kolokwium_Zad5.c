#include <stdio.h>
#include <stdlib.h>

void potroj(int n, int tab[])
{
    for(int i=0;i<n;i++)
        if(tab[i]%2==0)
        tab[i]=tab[i]*3;
}

void write(int n, int tab[])
{
    for(int i=0;i<n;i++)
        printf("%d\n", tab[i]);
}

int main()
{
    int n = 5;
    int tab[5] = {6, 2, 43, 22, 0};
    printf("Zawartosc tabeli tab: \n");
    write(n, tab);
    printf("Zawartosc tabeli tab po potrojeniu parzystych liczb: \n");
    potroj(n, tab);
    write(n, tab);
    return 0;
}
