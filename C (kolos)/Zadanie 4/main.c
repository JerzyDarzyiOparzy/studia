#include <stdio.h>
#include <stdlib.h>
int NWD(int a, int b){
    int temp;
    while(b>0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int NWW(int a, int b){
    return (a*b)/NWD(a,b);
}

int main()
{
    int a=5;
    int b=4;
    printf("%d",NWW(a,b));
    return 0;
}
