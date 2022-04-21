#include <stdio.h>
#include <stdlib.h>
int silnia(int x){
    if(x<2) return 1;
        else return x*silnia(x-1);
}
float potega(int n,float x){
    float pot=1.0;
    for(int i=1;i<=n;i++){
        pot=pot*x;
    }
    return pot;
}
float foo(int n, float x){
    float wynik=1+x;
    for(int i=2;i<=n;i++){
        wynik=wynik+(potega(i,x)/silnia(i));
    }
    return wynik;
}

int main()
{
    int n=5;
    float x=2.0;
    printf("%f",foo(n,x));
    return 0;
}
