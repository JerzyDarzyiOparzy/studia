#include <stdio.h>
#include <stdlib.h>

int indeks(char t[], char w)
{
    for(int x=0; t[x]!='\0'; x++)
        if(t[x] == w)
            return x;
    return -1;
}

void wytnijzn(char nap1[], char nap2[])
{
    for(int x=0; nap1[x]!='\0'; x++)
    {
        int a = indeks(nap2, nap1[x]);
        if (a == -1)
            nap1[x] = ' ';
    }
}

int indekswide(wchar_t t[], wchar_t w)
{
    for(int x=0; t[x]!=L'\0'; x++)
        if(t[x]==w)
            return x;
    return -1;
}

void wytnijznwide(wchar_t nap1wt[], wchar_t nap2wt[])
{
    for(int x=0; nap1wt[x]!=L'\0'; x++)
    {
        int a = indekswide(nap2wt, nap1wt[x]);
        if (a == -1)
            nap1wt[x] = L' ';
    }
}

int main()
{
    char nap1[] = "Qwerty";
    char nap2[] = "ert";
    wchar_t nap1wt[] = L"Qwerty";
    wchar_t nap2wt[] = L"rty";

    wytnijzn(nap1, nap2);
    printf("Nap1 po wycieciu liter innych niz 'ert':\n");
    for (int i=0;nap1[i]!='\0';i++)
        printf("%c\n", nap1[i]);

    wytnijznwide(nap1wt, nap2wt);
    printf("Nap1wt po wycieciu liter innych niz 'rty':\n");
    for (int i=0;nap1wt[i]!='\0';i++)
        wprintf(L"%c\n", nap1wt[i]);
    return 0;
}
