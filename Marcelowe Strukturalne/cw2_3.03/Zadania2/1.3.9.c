#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char operator;
    printf("Podaj operacje arytmetyczna\n");
    scanf("%s", &operator);
    printf("Podaj dwie liczby\n");
    scanf("%f%f",&a,&b);
    switch(operator)
    {
    case '+':
        printf("%f + %f = %f", a,b,a+b);
        break;
    case '-':
        printf("%f - %f = %f", a,b,a-b);
        break;
    case '*':
        printf("%f * %f = %f", a,b,a*b);
        break;
    case '/':
        printf("%f / %f = %f", a,b,a/b);
        break;
    default:
        printf("Zly operator");
    }
    return 0;
}
