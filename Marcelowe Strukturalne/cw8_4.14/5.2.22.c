#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* sklej(char nap1[], char nap2[], char nap3[])
{
    char *napklej = malloc((strlen(nap1) + strlen(nap2) + strlen(nap3) + 1) * sizeof(char));
    strcpy(napklej, nap1);
    strcat(napklej, nap2);
    strcat(napklej, nap3);
    return napklej;
}

wchar_t* sklejwide(wchar_t nap1wt[], wchar_t nap2wt[], wchar_t nap3wt[])
{
    wchar_t *napklej = malloc((wcslen(nap1wt) + wcslen(nap2wt) + wcslen(nap3wt) + 1) * sizeof(wchar_t));
    wcsncpy(napklej, nap1wt, 4);
    wcsncat(napklej, nap2wt, 4);
    wcsncat(napklej, nap3wt, 4);        //unfinished
    return napklej;
}

int main()
{
    char nap1[] = "Qw";
    char nap2[] = "er";
    char nap3[] = "ty";
    wchar_t nap1wt[] = L"yt";
    wchar_t nap2wt[] = L"re";
    wchar_t nap3wt[] = L"wQ";
    sklej(nap1, nap2, nap3);
    printf("Napisy po sklejeniu: %s\n", sklej(nap1, nap2, nap3));
    sklej(nap1, nap2, nap3);
    wprintf(L"Napisy po sklejeniu wide: %s\n", sklejwide(nap1wt, nap2wt, nap3wt));
    return 0;
}
