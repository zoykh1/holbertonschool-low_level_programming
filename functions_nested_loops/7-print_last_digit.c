#include "main.h"

/**
 * print_last_digit - last digit
 * @ls: variable
 * Return: ls
 */

int print_last_digit(int ls)
{
	ls = ls % 10;
	if (ls < 0)
	ls = -ls;
	_putchar ('0' + ls);
	return (ls);
}
