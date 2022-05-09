#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,najmniejsza,najwieksza,najwieksza2;
    printf("Podaj cztery liczby\n");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    for (int i = 0;;i++)
        if ((sqrt(a*a)*(i*i)+b*i+c)>d)
        {
        najmniejsza=i;
        printf("a) Najmniejsza pasujaca liczba nieujemna = %i\n",najmniejsza);
        break;
        }
    for (int i = 0;;i++)
        if (5*(i*i)+a*i+b>c)
        {
        najwieksza=i;
        printf("b) Najwieksza pasujaca liczba nieujemna = %i\n",najwieksza);
        break;
        }
    for (int i = 0;;i++)
        if (5*(i*i)+a*i+b>=c)
        {
        najwieksza2=i;
        printf("c) Najwieksza pasujaca liczba nieujemna = %i\n",najwieksza2);
        break;
        }
    return 0;
}
