#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a+*b;
}

int main()
{
    int tab[] = {-2,2,-1,1,4,4,9};
    int *wsk=tab+1;
    int b = *(wsk+=4); //b=4
    int c = b+8; // b=4  , c=12
    int d = foo(&b,&c); // b=4  , c=12  , d=16
    int e = (wsk+=-1)[3]; // b=4  , c=12  , d=16  , e=0
    b = *wsk + e+3; // b=  , c=  , d=  , e=
    c = d - (b+=9); // b=  , c=  , d=  , e=
    e = (d -= 3) + (c += 2); // b=  , c=  , d=  , e=
    b= (--c)-(d++);  // b=  , c=  , d=  , e=
    return 0;
}
