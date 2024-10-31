#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *			starting with the first character, followed by a new line.
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;

	if (_strlen(str) == 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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
