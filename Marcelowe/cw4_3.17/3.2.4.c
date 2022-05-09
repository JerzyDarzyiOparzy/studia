#include <stdio.h>
#include <stdlib.h>


int wskaznik (int *n, int *m)
{
    if (*m < *n)
    {
        int temp;
        temp = *m;
        *m = *n;
        *n = temp;
        return *n, *m;
    }
    else
        return *n, *m;
}


int main()
{
    int n, m;
    printf("Podaj dwa wskazniki\n");
    scanf("%d %d",&n, &m);
    wskaznik(&n, &m);
    printf("n = %d, m = %d", n, m);
    return 0;
}
