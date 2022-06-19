#include <stdio.h>
#include <stdlib.h>

struct element {
	float i;
	struct element* next;
};

struct element * utworz()
{
    return NULL;
};

struct element* dnk(struct element*Lista, float a)
{
    struct element * wsk ;
    if(Lista==NULL)
    {
        wsk=malloc(sizeof(struct element));
        Lista=wsk;
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
}

float minimum(struct element* Lista){
    struct element* p = Lista;
    float min = p->i;
    while(p != NULL){
        if (p->i < min){
            min = p->i;
        }
        p = p->next;
    }
    return min;
}



int main()
{
    struct element* Lista = utworz();
    Lista = dnk(Lista,8.0);
    Lista = dnk(Lista,-20.0);
    Lista = dnk(Lista,8.0);
    Lista = dnk(Lista,-68.0);
    Lista = dnk(Lista,-67.0);
    Lista = dnk(Lista,-100.0);
    printf("%f\n", minimum(Lista));
    return 0;
}
