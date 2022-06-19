#include <stdio.h>
#include <stdlib.h>

struct punkt10
{
    double t[10];
};

void kopiuj(struct punkt tab1[], struct punkt tab2[], int n)
{
    for(int i=0; i<n; i++)
        tab2[i]=tab1[i];
}

int main()
{
    struct punkt tab1[] = {1,2,3,4,5,6,7,8,9,10};
    struct punkt tab2[] = {0,0,0,0,0,0,0,0,0,0};
    kopiuj(tab1, tab2, 10);

    for(int i=0; i<10; i++)
        printf("%f, ", p.t[x])
    return 0;
}
