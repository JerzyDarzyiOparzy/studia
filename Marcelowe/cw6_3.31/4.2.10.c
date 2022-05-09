#include<stdio.h>
#include<stdlib.h>

int foo1(int n, int tab[])
{
    int temp = tab[0];
    for(int i=0;i<n;i++)
    {
        if (tab[i]>temp)
            temp = tab[i];
    }
    return temp;
}

int foo2(int n, int tab[])
{
    int temp = tab[0];
    for(int i=0;i<n;i++)
    {
        if (tab[i]<temp)
            temp = tab[i];
    }
    return temp;
}

int foo3(int n, int tab[])
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        if (tab[i]>tab[temp])
            temp = i;
    }
    return temp;
}

int foo4(int n, int tab[])
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        if (tab[i]<tab[temp])
            temp = i;
    }
    return temp;
}

int foo5(int n, int tab[])
{
    int temp = 0;
    int temptab[5];
    for(int i=0;i<n;i++)
    {
        temptab[i] = abs(tab[i]);
    }
    for(int i=0;i<n;i++)
    {
        if (temptab[i]>temp)
            temp = temptab[i];
    }
    return temp;
}

int foo6(int n, int tab[])
{
    int temp = 0;
    int temptab[5];
    for(int i=0;i<n;i++)
    {
        temptab[i] = abs(tab[i]);
    }
    for(int i=0;i<n;i++)
    {
        if (temptab[i]>temptab[temp])
            temp = i;
    }
    return temp;
}

int main()
{
    int n = 5;
    int tab[5]={0,1,64,-70,10};
    printf("Najwieksza liczba w tab to %d\n", foo1(n, tab));
    printf("Najmniejsza liczba w tab to %d\n", foo2(n, tab));
    printf("Indeks najwiekszej liczby w tab to %d\n", foo3(n, tab));
    printf("Indeks najmniejszej liczby w tab to %d\n", foo4(n, tab));
    printf("Najwieksza liczba bezwzgledna w tab to %d\n", foo5(n, tab));
    printf("Indeks najwiekszej liczby bezwzglednej w tab to %d\n", foo6(n, tab));
    return 0;
}
