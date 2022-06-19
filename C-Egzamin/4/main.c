#include <stdio.h>
#include <stdlib.h>

struct element {
	int i;
	struct element* next;
};

struct element* Create() {
	struct element* wsk = malloc(sizeof(struct element));
	wsk->next = NULL;

	return wsk;
}

void ShowPositiveNumbers(struct element* lista)
{
	struct element* temp = lista->next;
	if (temp == NULL)
		printf("Lista jest pusta\n");

	while (temp != NULL)
	{
		if (temp->i >= 0)
			printf("%d\n", temp->i);

		temp = temp->next;
	}
}

void Add(struct element* lista, int a)
{
	struct element* wsk = lista;

	while (wsk->next != NULL)
		wsk = wsk->next;

	wsk->next = malloc(sizeof(struct element));
	wsk = wsk->next;
	wsk->i = a;
	wsk->next = NULL;
};


int main() {
	struct element* lista = Create();

	Add(lista, 5);
	Add(lista, 8);
	Add(lista, -4);
	Add(lista, -7);
	Add(lista, 10);
	Add(lista, -10);
	Add(lista, 52);
	Add(lista, -512);

	ShowPositiveNumbers(lista);
}
