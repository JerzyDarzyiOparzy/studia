#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Podaj nieujemna liczbe\n");
    scanf("%f",&n);
    if(n<0)
    {
        printf("Liczba ujemna");
    }
    else
    {
        printf("%.f",sqrt(n));
    }
    return 0;
}
