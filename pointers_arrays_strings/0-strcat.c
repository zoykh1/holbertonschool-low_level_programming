#include "main.h"

/**
 * _strcat - fontction main
 *@dest: pointeur 1
 *@src: pointeur 2
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
