#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including \0
 *			to buffer pointed by dest
 *@src: source string to be copied
 *@dest: destination where to copy string
 *
 * Return: destination var.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
