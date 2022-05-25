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
    wskaznik->next=NULL;
    return wskaznik;
};

int main()
{
    struct element* l1 = utworz();
    printf("%p\n",l1);
    return 0;
}
