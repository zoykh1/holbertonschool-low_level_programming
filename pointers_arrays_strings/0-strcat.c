#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *@dest:string to be overwritten (\0) and adding the src
 *@src: string to be append to dest.
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		dest++;

	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
