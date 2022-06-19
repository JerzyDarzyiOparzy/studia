#include <stdio.h>
#include <stdlib.h>

enum czworokat
{
    TRAPEZ = 9, ROMB, KWADRAT = 9, PROSTOKAT
};

int main()
{
    enum czworokat zmienna = PROSTOKAT;
    printf("%d\n", zmienna);
    return 0;
}
