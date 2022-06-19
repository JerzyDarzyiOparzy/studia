#include <stdio.h>
#include <stdlib.h>


int* alokacja()
{
    return malloc(sizeof(int));
}


int main()
{
    printf("Alokowana pamiec to %p\n", alokacja());
    return 0;
}
