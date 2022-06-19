#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[])
{
    int count;
    for(int i=0;napis[i]!='\0';i++)
        count++;
    return count;
}

int dlugoscwt(wchar_t napiswt[])
{
    int count=0;
    for(int i=0;napiswt[i]!='\0';i++)
        count++;
    return count;
}

int main()
{
    char napis[] = "Qwerty";
    wchar_t napiswt[] = L"Aeiou";
    printf("Dlugosc napisu char: %d.\n", dlugosc(napis));
    printf("Dlugosc napisu wchar_t: %d.\n", dlugoscwt(napiswt));
    return 0;
}
