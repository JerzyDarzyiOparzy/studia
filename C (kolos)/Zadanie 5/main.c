#include <stdio.h>
#include <stdlib.h>
void potr(int n,int tab[]){
    for(int i=0;i<n;i++){
        if(tab[i]%2==0) tab[i]=3*tab[i];
    }
}
void pisz(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ",tab[i]);
    }
}
int main()
{
    int n=5;
    int tab[5]={37, 40, 8, 87, 44};
    int tab2[5]={1, 2, 3, 4, 5};
    pisz(n,tab);
    printf(" \n");
    potr(n,tab);
    pisz(n,tab);
    printf(" \n");
    potr(n,tab2);
    pisz(n,tab2);
    return 0;
}
