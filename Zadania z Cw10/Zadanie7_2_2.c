#include <stdio.h>
#include <stdlib.h>

typedef struct s_Trojkat {
	int a;
	int b;
	int c;
} Trojkat;

void Przepisz(Trojkat troj1, Trojkat *troj2) {
	*troj2 = troj1;
}

int main() {
	Trojkat trojkat1;
	Trojkat trojkat2;

	Przepisz(trojkat1, &trojkat2);
}