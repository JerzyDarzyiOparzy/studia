#include<stdio.h>
#include<stdlib.h>

void foo1(int n, int tab1[], int tab2[])
{
    for(int i=0;i<n;i++)
        tab2[i] = tab1[i];
}

void foo2(int n, int tab1[], int tab2[])
{
    for(int i=0;i<n;i++)
        tab2[i] = tab1[n-i-1];
}

int main()
{
    int n = 5;
    int tab1[5]={0,1,2,3,4};
    int tab2[5]={0,0,0,0,0};

    printf("Tab1[i]=Tab2[i]\n");
    foo1(n, tab1, tab2);
    for(int i=0;i<n;i++)
        printf("%d\n", tab2[i]);

    printf("Tab1[i]= odwrotnosc Tab2[i]\n");
    foo2(n, tab1, tab2);
    for(int i=0;i<n;i++)
        printf("%d\n", tab2[i]);

    return 0;
}
