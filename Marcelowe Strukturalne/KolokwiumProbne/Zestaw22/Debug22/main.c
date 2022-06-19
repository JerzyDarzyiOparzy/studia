#include <stdio.h>
#include <stdlib.h>

int foo(int n,int*tab)
{
    int b=*(tab+1); //b=
    int c=b+=4; //b= ,c=
    c=*(++tab)-(b*=2); //b= ,c=
    return c+b;
}

int main()
{
    int tab[] = {2,2,-3,2,9,8,1};
    int *wsk=tab-1;
    int b = *(wsk+=4);
    int c = b+2;
    int d = foo(7,tab); // b=  , c=  , d=
    int e = (wsk+=-1)[2]; // b=  , c=  , d=  , e=
    e = (d += 2) + (c -= 2); // b=  , c=  , d=  , e=
    c = d - (b*=6); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    return 0;
}
