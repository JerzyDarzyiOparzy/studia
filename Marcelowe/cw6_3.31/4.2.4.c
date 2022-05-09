#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float foo(int n, int tab[])
{
    int x = 1;
    for(int i=0;i<n;i++)
    {
        x *= tab[i];
        printf("%d\n",x);
    }
    float z = exp(log(x)/n);
    return z;
}

int main()
{
    int n = 5;
    int tab[5]={1,2,3,4,5};
    printf("Srednia geometryczna tab = %f.\n", foo(n, tab));
    return 0;
}
