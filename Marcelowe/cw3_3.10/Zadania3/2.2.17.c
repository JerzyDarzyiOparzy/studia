#include <stdio.h>
#include <stdlib.h>

int count = 0;
int counter(int n)
{
    for (int i = 0; i < n; i++)
        printf("ping\n");
    return count += 1;
}

int main()
{
    int n;
    printf("Funkcja liczaca wywolania, podaj liczbe do 5.\n");
    scanf("%i",&n);
    if (n<6)
    {
        printf("Wywolanie funkcji.\n");
        printf("%i\n",counter(n));
        printf("Kolejne wywolanie funkcji.\n");
        printf("%i\n",counter(n));
        printf("Kolejne wywolanie funkcji.\n");
        printf("%i\n",counter(n));
    }
    else
        printf("Duza liczba");
    return 0;
}
