#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Fonction uti pour print les nbs entier jusqu'à 98
 * @n: target max 98
 *
 */

void print_to_98(int n)
{
	if (n != 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
			if (n == 98)
			printf("%d", n);
		}

		while (n > 98)
		{
			printf("%d, ", n);
			n--;
			if (n == 98)
			printf("%d", n);
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
