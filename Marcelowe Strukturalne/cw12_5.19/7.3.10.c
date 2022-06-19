#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utworz()
{
    struct element * wskaznik = malloc(sizeof(struct element));
    wskaznik->next=NULL;     // zapis rownowazny do (*wskaznik).next
    return wskaznik;
};

int main()
{
    struct element* example = utworz();
    printf("%p", example);
    return 0;
}
