#include <stdio.h>
#include <stdlib.h>

enum zwierzak
{
    KOT, PIES, CHOMIK, PTAK
};

int main()
{
    enum zwierzak test = CHOMIK;
    printf("%d\n", test);
    return 0;
}
