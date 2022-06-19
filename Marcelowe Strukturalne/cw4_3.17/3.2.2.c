#include <stdio.h>
#include <stdlib.h>


int* wskaznik (int *n, int *m)
{
    if (*n < *m)
        return n;
    else
        return m;
}


int main()
{
    int n, m;
    printf("Podaj dwa wskazniki\n");
    scanf("%d %d",&n, &m);
    printf("Adres %d ma mniejsza zawartosc.",wskaznik(&n, &m));
    return 0;
}
