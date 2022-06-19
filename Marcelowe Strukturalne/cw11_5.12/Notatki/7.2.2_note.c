#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a, b, c;
};

void foo(struct trojkat troj, struct trojkat*troj2)
{
    *troj2 = troj;
}

int main()
{
    struct trojkat t1 = {3.4, 4.1, 5.1};
    struct trojkat t2 = {1.2, -0.2, 7.9};
    foo(t1, &t2);
    printf("%f %f %f \n", t1.a, t1.b, t1.c);
    printf("%f %f %f \n", t2.a, t2.b, t2.c);
    return 0;
}
