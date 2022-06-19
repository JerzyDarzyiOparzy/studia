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

void usunw(struct element * Lista, struct element * elem)
{
    if(elem == NULL)
        return;
    struct element * temp = Lista;
    while((temp->next != NULL)&&(temp->next != elem))
    {
        temp = temp->next;
    }
    if(temp->next = elem)
    {
        temp->next = elem->next;
        free(elem);
    }
}

int main()
{
    struct element * p = malloc(sizeof(struct element));
    p = malloc(sizeof(struct element));
    p->next = malloc(sizeof(struct element));
    p->next->i = 1;
    p->next->next = malloc(sizeof(struct element));
    p->next->next->i = 2;
    p->next->next->next = malloc(sizeof(struct element));
    p->next->next->next->i = 3;
    p->next->next->next->next = NULL;
    wyswietlLZG(p);
    usunw(p, p->next->next);
    wyswietlLZG(p);
    return 0;
}
