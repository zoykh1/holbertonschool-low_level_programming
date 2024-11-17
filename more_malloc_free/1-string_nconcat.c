#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat 2 string
 * @s1: string one
 * @s2: string two
 * @n: number of char of s2 to concat
 *
 * Return: concat
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 char *concat;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
