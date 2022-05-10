#include <stdio.h>
#include <stdlib.h>

int suma(int const *x, int const *y)
{
    return *x+*y;
}
int main()
{
    int a=4;
    int b=5;
    printf("%d\n",suma(&a,&b));
}
