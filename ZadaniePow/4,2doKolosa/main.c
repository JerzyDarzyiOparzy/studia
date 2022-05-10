#include <stdio.h>
#include <stdlib.h>

int foo(int(*f1)(int a),int(*f2)(int b), int n)
{
    for(int i=1;i<=n;i++)
    {
        if (f1(i)==(f2(i)^2))
            return 2;
    }
    return -2;
}

int fun1(int a)
{
    return a+1;
}

int fun2(int a)
{
    return a-1;
}

int main()
{
    printf("%d\n",foo(fun1,fun1,5));
    printf("%d\n",foo(fun1,fun2,5));

    return 0;
}
