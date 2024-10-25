#include "main.h"

/**
 * print_sign - check the code.
 * @n: varible
 * Return: Always 0 or return zero or return 1
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
