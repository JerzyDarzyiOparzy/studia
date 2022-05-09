#include <stdio.h>
#include <stdlib.h>

int foo(int n,int*tab)
{
    int b=*(tab+1); //b=2
    int c=b+=4; //b=6 ,c=6
    c=*(++tab)-(b*=2); //b=12 ,c=-10
    return c+b;
}

int main()
{
    int tab[] = {2,2,-3,2,9,8,1};
    int *wsk=tab-1;
    int b = *(wsk+=4);
    int c = b+2;
    int d = foo(7,tab); // b=2  , c=4  , d=2
    int e = (wsk+=-1)[2]; // b=2  , c=4  , d=2  , e=9
    e = (d += 2) + (c -= 2); // b=2  , c=2  , d=4  , e=6
    c = d - (b*=6); // b=12  , c=-8  , d=4  , e=6
    b = *wsk + e; // b=3  , c=-8  , d=4  , e=6
    return 0;
}
