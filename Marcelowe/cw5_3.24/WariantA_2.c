#include <stdio.h>
#include <stdlib.h>

int foo(int k)
{
    if (k==0 || k==1)
        return 2;
    if(k%2==0)
    {
        //int n=k/2;
        //return foo(n-1)+n;
        return foo(k/2-1)+k/2;
    }
    return 2*foo(k-1)-(k-1)/2;
}


int main()
{
    int n;
    printf("Podaj liczbe nieujemna.\n");
    scanf("%d", &n);
    printf("Funkcja rekurencyjna dla %d.\n", n);

    if (n<0)
        printf("Liczba jest ujemna.\n");
    else
        printf("%d.\n",foo(n));

    printf("Przypadek testowy dla 4.\n");
    printf("%d.\n",foo(4));

    printf("Przypadek testowy dla 5.\n");
    printf("%d.\n",foo(5));
    return 0;
}
