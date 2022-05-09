#include <stdio.h>
#include <stdlib.h>

int foo(char napis1[], char napis2[])
{
    for(int i=0;napis1[i]!='\0';i++)
    {
        if (napis1[i]!=napis2[i])
        {
            if (napis1[i]<napis2[i])
                    return 1;
                else
                    return 0;
        }
    }
    return -1;
}

int main()
{
    char napis1[]="aeiou";
    char napis2[]="avast";
    printf("%d", foo(napis1, napis2));
    return 0;
}
