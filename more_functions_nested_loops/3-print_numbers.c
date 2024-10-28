#include "main.h"

/**
 * print_numbers - affiche les chiffres de 0 à 9, suivis d'un retour à la ligne
 */
void print_numbers(void)
{
	char numbers[10];
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		numbers[i] = i + '0';
	}

	for (j = 0; j < 10; j++)
	{
		_putchar(numbers[j]);
	}

	_putchar('\n');
}
