#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - printing alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
