#include "main.h"

/**
 *_puts - uses char str as entry
 * @str: string to be printed to stdout
 *
 * Description: prints string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
