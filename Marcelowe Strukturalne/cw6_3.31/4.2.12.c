#include<stdio.h>
#include<stdlib.h>

void reset(int tab[])
{
    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 64;
    tab[3] = -70;
    tab[4] = 10;
}

void foo1(int n, int tab[])
{
    int temp[5];
    for(int i=0;i<n;i++)
        temp[i] = tab[i];
    for(int i=0;i<n;i++)
        tab[i] = temp[n-i-1];
}

void foo2(int n, int tab[])
{
    int stored = tab[0];
	for (int i=0;i<n-1;i++)
		tab[i] = tab[i+1];
	tab[n-1] = stored;
}

void foo3(int n, int tab[])
{
	int stored = tab[n-1];
	for (int i=n-1;i>0;i--)
		tab[i] = tab[i-1];
	tab[0] = stored;
}

void foo4(int n, int tab[])
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if (tab[j] > tab[j+1]) {
				int temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
		}
	}
}

void foo5(int n, int tab[])
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if (tab[j] < tab[j + 1])
            {
				int temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
		}
	}
}

int main()
{
    int n = 5;
    int tab[5]={0,1,64,-70,10};

    printf("Odwrotna kolejnosc: \n");
    foo1(n, tab);
    for(int i=0;i<n;i++)
        printf("%d\n",tab[i]);

    reset(tab);
    printf("Przesuniete o jeden w lewo: \n");
    foo2(n, tab);
    for(int i=0;i<n;i++)
        printf("%d\n",tab[i]);

    reset(tab);
    printf("Przesuniete o jeden w prawo: \n");
    foo3(n, tab);
    for(int i=0;i<n;i++)
        printf("%d\n",tab[i]);

    reset(tab);
    printf("Posortowane rosnaco: \n");
    foo4(n, tab);
    for(int i=0;i<n;i++)
        printf("%d\n",tab[i]);

    reset(tab);
    printf("Posortowane malejaco: \n");
    foo5(n, tab);
    for(int i=0;i<n;i++)
        printf("%d\n",tab[i]);

    return 0;
}
