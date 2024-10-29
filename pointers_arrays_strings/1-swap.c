#include "main.h"
/**
 * swap_int - echanger les valeur pointé par 2 pointeur.
 *@a:pointeur 1
 *@b:pointeur 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
