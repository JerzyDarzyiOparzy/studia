#include <stdio.h>
#include <stdlib.h>


void foo(int n, float tab1[], float tab2[])
{
    float temp[n];

    for(int i=0; i<n; i++)
    {
        temp[i] = tab1[i];
    }

    for(int i=0;i<n;i++)
        if(i%2!=0){
            tab1[i]=tab2[i];
            tab2[i]=temp[i];
        }

}

int main()
{
    int n=6;
    float tab1[6] = {0, 1, 0, 1, 0, 1};
    float tab2[6] = {1, 0, 1, 0, 1, 0};
    foo(n, tab1, tab2);
    for(int i=0;i<n;i++)
        printf("%f\n - - %f\n",tab1[i], tab2[i]);


    return 0;
}
