#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be half printed
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int half = len / 2;
	int i;

	if (len % 2 == 0)
	{
		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = half + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
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
