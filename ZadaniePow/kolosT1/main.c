#include <stdio.h>
#include <stdlib.h>


int foo(float * const wsk1, float const * wsk2)
{
    return *wsk1 + *wsk2;
}

int foo_cz(int n, float tab1[], float tab2[])
{
    float wynik1=0;
    float wynik=0;


    for(int i=0; i<=n-1; i++){
        wynik+=tab1[i];
    }

    for(int i=0; i<=n-1; i++){
        wynik1+=tab2[i];
    }

    float srednia = wynik/n;
    float srednia1 = wynik1/n;

    if(srednia==srednia1)
        return 1;
    return 0;
}
int main()
{
    int n = 3;
    float tab1[3] = {1, 2, 3};
    float tab2[3] = {1, 2, 3};

    printf("%d\n", foo_cz(n,tab1,tab2));

    //float wsk1 = 4;
    //float wsk2 = 10;

    //printf("%d\n", foo(&wsk1,&wsk2));
    //return 0;
}
