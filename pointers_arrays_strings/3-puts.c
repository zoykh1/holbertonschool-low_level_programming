#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing the accepted characters
 *
 * Return: the number of bytes in the initial segment of s which consist
 *			only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				j = -1;
				break;
			}
			j++;
		}

		if (j != -1)
		{
			break;
		}

		s++;
		i++;
	}

	return (i);
}
