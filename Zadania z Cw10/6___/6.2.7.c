#include <stdio.h>
#include <stdlib.h>

int **triangle(int n)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++)
        *(tab+i) = (int*) malloc(sizeof(int)*(i+1));
    return tab;
}

int main()
{
    int n = 5;
    printf("%p", triangle(n));
    return 0;
}
