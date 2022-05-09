#include <stdio.h>
#include <stdlib.h>

void kopiujn(int n, char nap1[], char nap2[])
{
    for(int i=0;i<n;i++)
        nap2[i]=nap1[i];
    nap2[n]='\0';
}

void kopiujnwide(int n, wchar_t nap1wt[], wchar_t nap2wt[])
{
    for(int i=0;i<n;i++)
        nap2wt[i]=nap1wt[i];
    nap2wt[n]='\0';
}

int main()
{
    int n = 4;
    char nap1[] = "Qwerty";
    char nap2[n];
    wchar_t nap1wt[] = L"ytrewQ";
    wchar_t nap2wt[n];

    kopiujn(n, nap1, nap2);
    printf("Napis po przepisaniu:\n");
    for (int i=0;nap2[i]!='\0';i++)
        printf("%c\n", nap2[i]);

    kopiujnwide(n, nap1wt, nap2wt);
    printf("Napis wchar_t po przepisaniu:\n");
    for (int i=0;nap2wt[i]!='\0';i++)
        printf("%c\n", nap2wt[i]);
    return 0;
}
