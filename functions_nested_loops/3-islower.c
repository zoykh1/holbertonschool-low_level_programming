#include "main.h"
/**
 * _islower - main fonc
 * @c: la variable
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
