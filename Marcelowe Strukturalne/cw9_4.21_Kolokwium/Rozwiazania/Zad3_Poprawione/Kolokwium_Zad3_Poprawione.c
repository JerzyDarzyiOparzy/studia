#include <stdio.h>
#include <stdlib.h>

int* allocate()
{
    int * temp = malloc(sizeof(int)*4);
    *temp = 5;
    *(temp+1) = 2;
    *(temp+2) = -3;
    *(temp+3) = -5;
    return temp;
}

int main()
{
    int* wsk = allocate();
    printf("temp to %d\n", *wsk);
    printf("temp+1 to %d\n", *(wsk+1));
    printf("temp+2 to %d\n", *(wsk+2));
    printf("temp+3 to %d\n", *(wsk+3));
    printf("Adres ostatni to %d\n", &wsk[-1]);
    return 0;
}
