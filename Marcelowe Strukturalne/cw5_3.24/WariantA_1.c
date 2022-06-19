#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int a, b;
    printf("Podaj dwie liczby.\n");
    scanf("%d %d", &a, &b);
    zamiana(&a, &b);
    printf("Po zamianie miejscami otrzymujemy a = %d, b = %d.\n", a, b);
    a = 10;
    b = 20;
    printf("Przyklad, gdy a = %d, b = %d.\n", a, b);
    zamiana(&a, &b);
    printf("Po zamianie miejscami otrzymujemy a = %d, b = %d.\n", a, b);
    return 0;
}
