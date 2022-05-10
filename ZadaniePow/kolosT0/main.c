#include <stdio.h>
#include <stdlib.h>

int foo_sze(int n)
{
    if(n%9==0 || n%9==1 || n%9==8){
        printf("%d jest szescianem innej liczny calkowitej\n", n);
        return 1;

    }
    return 0;
}

int foo_kwa(int t)
{
    if(t%3==0 || t%3==1){
        printf("%d jest kawdratem innej liczny calkowitej\n", t);
        return 1;
    }
    return 0;
}
int main()
{
    printf("%d\n", foo_sze(125));
    printf("%d\n", foo_kwa(100));
    return 0;
}
