#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    if (n<=1)
        return 1;
    return silnia(n-1)*n;
}

int main()
{
    int n;
    printf("Podaj liczbe\n");
    scanf("%i",&n);
    printf("%i",silnia(n));
    return 0;
}
