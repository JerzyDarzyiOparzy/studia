#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x;
    printf("Podaj liczbe wymierna nieujemna\n");
    scanf("%u",&x);
    int sr=sqrt(x);
    printf("%u",sr);
    return 0;
}
