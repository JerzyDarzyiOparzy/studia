#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[])
{
    int count;
    for(int i=0; napis[i]!='\0'; i++)
        count++;
    return count;
}

int indeks(char napis[])
{
    int dlg = dlugosc(napis);   // Funkcja nadaje kazdej z samoglosek brak wystapienia
    int a = -1;
    int e = -1;
    int ii = -1;
    int o = -1;
    int u = -1;
    int y = -1;

    for(int i=dlg; i>=0; i--)       // Dla kazdej samogloski jezeli wystepuje od konca, bierze pozycje i zamyka for loop
        if(napis[i] == 'a')
        {
            a = i;
            break;
        }
    for(int i=dlg; i>=0; i--)
        if(napis[i] == 'e')
        {
            e = i;
            break;
        }
    for(int i=dlg; i>=0; i--)
        if(napis[i] == 'i')
        {
            ii = i;
            break;
        }
    for(int i=dlg; i>=0; i--)
        if(napis[i] == 'o')
        {
            o = i;
            break;
        }
    for(int i=dlg; i>=0; i--)
        if(napis[i] == 'u')
        {
            u = i;
            break;
        }
    for(int i=dlg; i>=0; i--)
        if(napis[i] == 'y')
        {
            y = i;
            break;
        }
    int indx = y;       // Bierze najwieksza pozycje samogloski i zwraca ja
    if(a>indx)
        indx = a;
    if(e>indx)
        indx = e;
    if(ii>indx)
        indx = ii;
    if(o>indx)
        indx = o;
    if(u>indx)
        indx = u;
    return indx;        // Problem: funkcja nie dziala na duze samogloski, nie znam wydajnego sposobu by wykonac funkcje bez robienia jej dwa razy dluzszej by kompensowac za duze samogloski
}

void samogloska(char napis[])
{
    int cn = dlugosc(napis);
    int indx = (indeks(napis));
    for(int i=cn; i>=0; i--)
    {
        if(i == indx)
        {
            napis[i+1] = '\0';
            return;
        }
    }
}

int main()
{
    char nap[] = "Olsztyn";
    indeks(nap);
    samogloska(nap);
    for(int i=0; nap[i]!='\0'; i++)
        printf("%c ",nap[i]);
    return 0;
}

