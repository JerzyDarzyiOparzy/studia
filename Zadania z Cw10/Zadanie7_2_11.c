#include <stdio.h>
#include <stdlib.h>

union Liczba {
	int calkowita;
	double wymierna;
};

typedef struct s_dane {
	int tp;
	union Liczba zaw;
} Dane;

Dane Wypisz() {
	Dane dane;

	char output;
	printf("Czy chcesz wczytac liczba calkowita (y/n - wymierna): ");
	scanf_s("%c", &output);

	dane.tp = output == 'y' ? 0 : 1;
	if (dane.tp == 0) {
		printf("Wpisz liczbe calkowita: ");
		scanf_s("%d", &dane.zaw.calkowita);
	}
	else {
		printf("Wpisz liczbe wymierna: ");
		scanf_s("%lf", &dane.zaw.wymierna);
	}

	return dane;
}

int main() {
	Dane dane;
	dane = Wypisz();
}