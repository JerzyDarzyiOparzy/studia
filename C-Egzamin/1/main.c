#include <stdio.h>
#include <stdlib.h>

/* U�� je we w�a�ciwej kolejno�ci, aby otrzyma� nag��wek funkcji fun,
kt�rej argumentem jest wska�nik na funkcj� i liczba ca�kowita.
Funkcja nic nie zwraca (jest typu void).
Nast�pnie dodaj dowoln� implementacj� funkcji i stw�rz dla niej przypadek testowy */
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
