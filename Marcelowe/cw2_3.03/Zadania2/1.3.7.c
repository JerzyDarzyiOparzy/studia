#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,x1,x2,delta;
    printf("Podaj wspolczynniki rownania kwadratowego\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a == 0)
    {
        printf("To nie jest rownanie kwadratowe\n");
        if(b != 0)
        {
            x1 = -c / b;
            printf("x = %f",x1);
        }
        else
        {
            if(c == 0)
                printf("Nieskonczenie wiele rozwiazan\n");
            else
                printf("Rownanie sprzeczne\n");
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if(delta<0)
            printf("Brak rozwiazan\n");
        else if(delta=0)
        {
            x1 = -b / (2*a);
            printf("x = %f",x1);
        }
        else
        {
        delta = b * b - 4 * a * c;
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("x1 = %f, x2 = %f", x1, x2);
        }
    }
    return 0;
}
