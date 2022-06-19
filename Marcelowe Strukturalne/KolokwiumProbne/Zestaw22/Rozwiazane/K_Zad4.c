#include <stdio.h>
#include <stdlib.h>

int NWD(int a, int b)
{
    int temp;
    while(b>0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int NWW(int a, int b)
{
    return (a*b)/NWD(a, b);
}

int main()
{
    int a = 5, b = 10;
    printf("Najmniejsza wspolna wielokrotnosc %d i %d to %d", a, b, NWW(a, b));
    return 0;
}
