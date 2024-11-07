#include "main.h"

/**
 * print_chessboard - prints a chessboard using an array
 * @a: array to be printed
 * Void function : no need for return.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			/**
			 * if we need readability, adding space in between pieces.
			 * if (j < 7)
			 *{
			 *	_putchar(' ');
			 *}
			 */
		}
		_putchar('\n');
	}
}
