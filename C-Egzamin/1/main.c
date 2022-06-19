#include <stdio.h>
#include <stdlib.h>

/* U³ó¿ je we w³aœciwej kolejnoœci, aby otrzymaæ nag³ówek funkcji fun,
której argumentem jest wskaŸnik na funkcjê i liczba ca³kowita.
Funkcja nic nie zwraca (jest typu void).
Nastêpnie dodaj dowoln¹ implementacjê funkcji i stwórz dla niej przypadek testowy */
void fun(int (*wsk) (int a, int b), int n)
{
    printf("%d",wsk(n,n));
}

int funkcja(int a, int b)
{
    return 5;
}

int main()
{
    fun(funkcja,60);
    return 0;
}
