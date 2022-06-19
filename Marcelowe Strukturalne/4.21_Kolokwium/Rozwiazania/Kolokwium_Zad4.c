#include <stdio.h>
#include <stdlib.h>

float rekurencja(int n)
{
    if(n==0 || n==1)
        return 2;
    if(n%2==0)
    {
        return rekurencja(n/2);
    }
    return rekurencja((n-1)/2)+1;

}

int main()
{
    int n = 4;
    printf("Dla n = %d rekurencja zwraca %f\n", n, rekurencja(n));
    int m = 5;
    printf("Dla m = %d rekurencja zwraca %f\n", m, rekurencja(m));
    return 0;
}
