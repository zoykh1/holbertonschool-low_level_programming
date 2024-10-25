#include "main.h"

/**
 * print_alphabet_x10 - Desc de la fonction
 * Return: return rs
*/

void print_alphabet_x10(void)
{
int alp10;
for (alp10 = 0; alp10 < 10; alp10++)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
}
