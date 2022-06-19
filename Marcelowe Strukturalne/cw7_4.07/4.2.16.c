#include <stdio.h>
#include <stdlib.h>

void foo(double*wsk)
{
    free(wsk);
}

int main()
{
    double*tab=malloc(5*sizeof(double));
    printf("%p\n",tab);
    printf("%Iu\n",_msize(tab));
    foo(tab);
    printf("%p\n",tab);
    return 0;
}
