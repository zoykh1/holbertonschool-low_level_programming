#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Libère la mémoire allouée pour un chien
 * @d: Pointeur vers la structure dog_t à libérer
 *
 * Description: libère la mémoire allouée pour une structure dog_t,
 * y compris les chaînes de caractères pour le nom et le propriétaire.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);

	free(d->owner);

	free(d);
}
