#include <stdio.h>
#include <stdlib.h>


int przepisanie(int const* n, int* const m)
{
    return *m = n;
}


int main()
{
    int x;
    int y=0;

    printf("Podaj liczbe do przepisania.\n");
    scanf("%d",&x);

    int const* n = x;
    int* const m = &y;

    przepisanie(n, m);
    printf("Po przepisaniu m = %d", *m);

    return 0;
}
