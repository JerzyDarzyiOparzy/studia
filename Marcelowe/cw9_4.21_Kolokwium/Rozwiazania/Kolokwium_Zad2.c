#include <stdio.h>
#include <stdlib.h>

float potega(int n, float x)
{
    float pot=1.0;
    for(int i=1;i<=n;i++)
    {
        pot = pot*x;
    }
    return pot;
}

float rekurencja(int n, float x)
{
    float wynik = 1-x;
    for(int i=2;i<=n;i++)
    {
        wynik = wynik + (potega(i, -1) * (potega(i, x)/i));
    }
    return wynik;
}

int main()
{
    int n = 4;
    float x = 2.0;
    printf("n = %d, x = %f, wynik rekurencji to %f.\n", n, x, rekurencja(n, x));
    return 0;
}
