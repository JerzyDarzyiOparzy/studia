#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punkt
{
    float x,y,z;
};

float dist(struct punkt p1, struct punkt p2)
{
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)+pow(p1.z-p2.z,2));
}

float foo(struct punkt tab[],int n)
{
    int temp=dist(tab[0],tab[1]);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if (i!=j)
            {
                if (temp < dist(tab[i], tab[j]))
                {
                    temp=dist(tab[i], tab[j]);
                }
            }
        }
    }
    return temp;
}


int main()
{
    struct punkt p1 = {3,4,5};
    struct punkt p2 = {3,4,8};
    struct punkt p3 = {3,-4,8};
    struct punkt tab[3] = {p1,p2,p3};
    printf("%f\n", dist(p1,p2));
    printf("%f\n", foo(tab,3));
    return 0;
}
