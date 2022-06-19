#include <stdio.h>
#include <stdlib.h>
void np(int n)
{
    if(n%2!=0)
    {
        printf("%d\n", n);
    }
}
/*int np(int n)
{
    if(n%2!=0)
    {
        return n;
    }
    return NULL;
}*/
int main()
{
    int n;
    scanf("%d", &n);
    /*for(int i=1;i<n;i++)
    {
        printf("%d\n", np(i));
    }*/

    for(int i=1;i<n;i++)
    {
        np(i);
    }
    return 0;
}
