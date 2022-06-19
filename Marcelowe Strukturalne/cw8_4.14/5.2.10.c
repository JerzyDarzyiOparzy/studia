#include <stdio.h>
#include <stdlib.h>

int porownanie(char* napis1, char *napis2, int a)
{
    int i;
    for(i=0;napis1[i]!=0&& napis2[i]!=0;i++)
    {
        if(napis1[i+a]!=napis2[i])
        {
            return 0;
        }
    }
    if (napis1[i]==0)
    {
        return 0;
    }
    return 1;
}

int dlugosc(char*napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

void wytnij2(char *napis1,char *napis2)
{
    int i;
    for(i=0;napis1[i]!=0;i++)
    {
        if(porownanie(napis1,napis2,i)==1)
        {
            int d1=dlugosc(napis1);
            int d2=dlugosc(napis2);
            for(int j=0;j<d1-i-d2;j++)
            {
                napis1[i+j]=napis1[i+j+d2];
            }
            napis1[d1-d2]=0;
            return;
        }
    }
}

int main()
{
    char nap1[] = "abcdefdef";
    char nap2[] = "def";
    printf("%d\n", porownanie(nap1,nap2,3));
    wytnij2(nap1,nap2);
    printf("%s\n",nap1);
    printf("%s\n",nap2);
    return 0;
}
