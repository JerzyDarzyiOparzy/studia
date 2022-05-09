#include <stdio.h>
#include <stdlib.h>

int sqrtd(int n, int m)
{
    float temp, sqrt;
    sqrt = n / m;
    temp = 0;
    while(sqrt != temp)
        {
        temp = sqrt;
        sqrt = (n / temp + temp) / m;
        }
    return sqrt;
}

int suma(int n, int m)
{
	int wynik = 1;
	for (int i = 0; i <= n; i++)
		wynik += (int)sqrtd(i, m);
	return wynik;
}

int main()
{
    int n,m;
    printf("Podaj liczby calkowite nieujemne.\n");
    scanf("%i %i",&n,&m);
    if (n<0)
        printf("Liczba n jest ujemna.\n");
    else if (m<2)
        printf("Liczba m nie jest wieksza od 1.\n");
    else
    {
        printf("%i\n",suma(n,m));
    }
    return 0;
}

