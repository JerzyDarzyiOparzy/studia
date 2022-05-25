#include <stdio.h>
#include <stdlib.h>

typedef struct s_punktn {
	float* tab;
	int w;
} punktn;

void Przepisz(punktn tab1[], punktn tab2[], int n) {
	for (int i = 0; i < n; i++)
	{
		tab2[i].tab = malloc(tab1[i].w * sizeof(float));
		for (int j = 0; j < tab1[i].w; j++)
			tab2[i].tab[j] = tab1[i].tab[j];
	}
}

int main() {
	punktn tab1[5];
	punktn tab2[5];
	int size = 5;

	Przepisz(tab1, tab2, 5);
}