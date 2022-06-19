#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void wyswietlLZG(struct element * Lista)
{
    struct element * temp = Lista->next;
    if(temp == NULL)
        printf("Lista jest pusta\n");
    while(temp != NULL)
    {
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    printf("-----\n");
}

void dodajw(struct element * Lista, struct element * elem, int a)
{
    struct element * temp = malloc(sizeof(struct element));
    temp->i = a;
    temp->next = elem->next;
    elem->next = temp;
}

int main()
{
    struct element * p = malloc(sizeof(struct element));
    p = malloc(sizeof(struct element));
    p->next = malloc(sizeof(struct element));
    p->next->i = 2;
    p->next->next = malloc(sizeof(struct element));
    p->next->next->i = 4;
    p->next->next->next = NULL;
    wyswietlLZG(p);
    dodajw(p, p, 1);
    wyswietlLZG(p);
    dodajw(p, p->next->next, 3);
    wyswietlLZG(p);
    return 0;
}
