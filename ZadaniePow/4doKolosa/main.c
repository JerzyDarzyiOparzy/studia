#include<stdio.h>
#include <stdlib.h>

void foo(int n, int m, int k)
{
    if(m%n==0 && m%k==0)
        printf("2");

    if(m%n==0 || m%k==0)
        printf("1");

    else printf("0");
}

/*int main()
{
    int n = 5;
    int m = 4;
    int k = 3;
    printf("%d", foo(n, m, k));
}*/

int main()
{
    foo(5,4,1);
}

