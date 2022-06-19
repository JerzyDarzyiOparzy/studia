#include <stdio.h>
#include <stdlib.h>


int wskaznik (int n, int *w)
{
    return *w = n;
}


int main()
{
    int n, w;
    printf("Podaj n.\n");
    scanf("%d",&n);
    printf("w = %d", wskaznik(n, &w));
    return 0;
}
