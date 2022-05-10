#include <stdio.h>
#include <stdlib.h>

void foo(float * const wsk1, float const *wsk2)
{
    printf("%d\n", abs(wsk1 - wsk2));
}

int foo1(int n)
{
    int x;
    x^2=n;

    if((sqrt(n)^2)==n)
    {
        return 1;
    }
    else return 0;
}

int main()
{

    printf("%d\n", foo1(5));

    float wsk1 =-5.6;
    float wsk2 =102.5;
    float wsk3 =69;
    float wsk4 =420;

    foo(&wsk2, &wsk4);
    printf("%d\n", abs(&wsk2 - &wsk4));

    //printf("%p\n", &wsk1);
    printf("%p\n", &wsk2);
    printf("%p\n", &wsk3);
    printf("%p\n", &wsk4);
    //printf("%f\n", foo(&wsk1,&wsk2));

    //printf("%Iu\n",sizeof(&wsk1));


}
