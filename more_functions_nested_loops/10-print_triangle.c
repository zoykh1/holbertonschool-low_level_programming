#include "main.h"

/**
 * print_triangle - fais une diagonale
 *@n: base du triangle
 * Return: Always le triangle
 */

void print_triangle(int n)

{
int espace;
int hashtag;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (espace = 1; espace <= n; espace++)
		{
		for (hashtag = 0; hashtag < n - espace; hashtag++)
		{
			_putchar(' ');
		}
		for (hashtag = 0; hashtag < espace; hashtag++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
