#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node * next;
};

int ujemne(struct node *n1, struct node *n2)
{
    while(n1 != NULL && n2 != NULL)
    {
        if()
            return 0;
        else
        {
            n1 = n1->next;
            n2 = n2->next;
        }
    }
    if(n1 != NULL || n2 != NULL)
        return 0;
    else
        return 1;
}

int main()
{
    struct node *n1 = malloc(sizeof(struct node));
    n1->x = 1;
    struct node *n2 = malloc(sizeof(struct node));
    n2->x = 1;
    return 0;
}
