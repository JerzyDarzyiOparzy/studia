#include<stdio.h>
#include<stdlib.h>

void foo1(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab3[i] = tab1[i]+tab2[i];
    }
}

void foo2(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        if (tab1[i]>tab2[i])
            tab3[i] = tab1[i];
        else
            tab3[i] = tab2[i];
    }
}

void foo3(int n, int tab1[], int tab2[], int tab3[])
{
    int temp[5];
    for(int i=0;i<n;i++)
    {
    temp[i] = tab2[i];
    tab2[i] = tab1[i];
    tab1[i] = tab3[i];
    tab3[i] = temp[i];
    }

}

int main()
{
    int n = 5;
    int tab1[5]={0,1,6,3,10};
    int tab2[5]={2,4,2,8,4};
    int tab3[5]={0,0,0,0,0};
    printf("Tab3[i] = Suma Tab1[i]+Tab2[i].\n");
    foo1(n, tab1, tab2, tab3);
    for(int i=0;i<n;i++)
        printf("Tab3[%d] = %d.\n", i, tab3[i]);
    printf("Tab3[i] = Wieksze z Tab1[i] Tab2[i].\n");
    foo2(n, tab1, tab2, tab3);
    for(int i=0;i<n;i++)
        printf("Tab3[%d] = %d.\n", i, tab3[i]);
    tab3[0] = 0;
    tab3[1] = 0;
    tab3[2] = 0;
    tab3[3] = 0;
    tab3[4] = 0;
    printf("Przesuwa raz wartosci miedzy tabelami.\n");
    foo3(n, tab1, tab2, tab3);

    printf("Tab1 = \n");
    for(int i=0;i<n;i++)
        printf("%d\n", tab1[i]);

    printf("Tab2 = \n");
    for(int i=0;i<n;i++)
        printf("%d\n", tab2[i]);

    printf("Tab3 = \n");
    for(int i=0;i<n;i++)
        printf("%d\n", tab3[i]);

    return 0;
}
