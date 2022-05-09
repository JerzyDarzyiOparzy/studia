#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,p,pole;
    printf("Podaj trzy boki, lub bok i wysokosc. (w przypadku wysokosci podaj trzeci bok jako 0)\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if (c == 0)
    {
        pole = (a * b) / 2.0;
    }
    else
    {
        p = (a + b + c) / 2.0;
        pole=sqrt(p * (p - a) * (p - b) * (p - c));
    }
    printf("%f\n",pole);
    return 0;
}
