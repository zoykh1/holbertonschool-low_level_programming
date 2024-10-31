#include "main.h"

/**
 * rev_string - reverse a string
 *@s: string to be reversed
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s + _strlen(s) - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

/**
 * _strlen - calculate the length of a string
 *@s: string to be tested
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
