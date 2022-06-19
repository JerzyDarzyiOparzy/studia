#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void wyswietlLBG(struct element * Lista)
{
    struct element * temp = Lista;
    if(temp==NULL)
        printf("Lista jest pusta\n");
    while(temp!=NULL)
    {
        printf("%d\n", temp->i);
        temp=temp->next;
    }
    printf("----\n");
}

struct element * dodajw(struct element * Lista, struct element * elem, int a)
{
    struct element * temp = malloc(sizeof(struct element));
    temp->i = a;
    if(elem == NULL)
    {
        temp->next = Lista;
        Lista = temp;
    }
    else
    {
        temp->next = elem->next;
        elem->next = temp;
    }
    return Lista;
};

int main()
{
    struct element* p = malloc(sizeof(struct element));
    p->i = 2;
    p->next = malloc(sizeof(struct element));
    p->next->i = 4;
    p->next->next = NULL;
    wyswietlLBG(p);
    p = dodajw(p, NULL, 1);
    wyswietlLBG(p);
    p = dodajw(p, p->next, 3);
    wyswietlLBG(p);
    return 0;
}
