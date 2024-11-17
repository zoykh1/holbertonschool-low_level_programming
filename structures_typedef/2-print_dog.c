#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Imprime les données de struct dog
 * @d: Pointeur vers la structure dog à imprimer
 *
 * Description: imprime les informations d'un chien.
 * Si un élément est NULL, elle imprime (nil) à la place.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
