#include "main.h"
/**
 * _strlen - chaine de caractere
 *@s: pointeur qui pointe un tableau
 *Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
