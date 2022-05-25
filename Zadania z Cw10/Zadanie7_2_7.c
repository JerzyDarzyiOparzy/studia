#include <stdio.h>
#include <stdlib.h>

typedef struct s_zespolone {
	double im;
	double re;
} zespolone;

double Sum(zespolone z1, zespolone z2) {
	return z1.im + z1.re + z2.im + z2.re;
}

int main() {
	zespolone z1 = {4.25, 5.77};
	zespolone z2 = { 2.232, 33.33 };

	printf("Suma wartosci tych struktur wynosi: %lf", Sum(z1, z2));
}