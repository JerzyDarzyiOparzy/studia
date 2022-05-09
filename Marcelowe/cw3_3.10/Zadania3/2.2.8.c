#include <stdio.h>
#include <stdlib.h>

int floorsqrt(int liczba)
{
    float temp, sqrt;
    sqrt = liczba / 2;
    temp = 0;
    while(sqrt != temp)
        {
        temp = sqrt;
        sqrt = (liczba / temp + temp) / 2;
        }
    return sqrt;
}
int main()
{
    int liczba;
    printf("Podaj liczbe dodatnia\n");
    scanf("%i", &liczba);
    if (liczba < 1)
        printf("Liczba nie jest dodatnia\n");
    else
        printf("%i\n", floorsqrt(liczba));
    return 0;
}
