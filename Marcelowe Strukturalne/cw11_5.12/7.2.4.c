#include <stdio.h>
#include <stdlib.h>

struct punkt
{
    double x, y, z;
};

void kopiuj(struct punkt p1[], struct punkt p2[], int n)
{
    for(int i=0; i<n; i++)
        p2[i]=p1[i];
}

int main()
{
    struct punkt p1[] = {{1,2,3}, {4,5,6}, {7,8,9}};
    struct punkt p2[] = {{0,0,0}, {0,0,0}, {0,0,0}};
    kopiuj(p1, p2, 3);

    for(int i=0; i<3; i++)
        printf("%f %f %f\n", p2[i].x, p2[i].y, p2[i].z);
    return 0;
}
