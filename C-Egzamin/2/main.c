#include <stdio.h>
#include <stdlib.h>

int dlug1(char tekst[])
{
    int count;
    for(int i=0;tekst[i]!='\0';i++)
        {
            if(tekst[i] >= '1' && tekst[i] <= '9')
            {
                count=count+2;
            }
            count++;
        }
    return count;
}

int main()
{
    char tekst[] = "abc3334";
    printf("Dlugosc napisu char: %d.\n", dlug1(tekst));
    return 0;
}
