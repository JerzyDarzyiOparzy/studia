#include <stdio.h>
#include <stdlib.h>

typedef struct s_Trojkat {
	int a;
	int b;
	int c;
} Trojkat;

int Obowod(struct s_Trojkat trojkat) {
	return trojkat.a + trojkat.b + trojkat.c;
}

int main() {
	Trojkat trojkat;

	printf("Podaj bok a: ");
	scanf_s("%d", &trojkat.a);

	printf("Podaj bok b: ");
	scanf_s("%d", &trojkat.b);

	printf("Podaj bok c: ");
	scanf_s("%d", &trojkat.c);

	printf("Obowod tego trojkata wynosi: %d", Obowod(trojkat));
}