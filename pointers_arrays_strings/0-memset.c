#include "main.h"

/**
 * _memset - fills the memory with b n times
 * @s: pointer to the memory area
 * @b: character to fill in memory
 * @n: The number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
