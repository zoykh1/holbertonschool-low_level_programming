#include <stdio.h>

/**
 * print_diagsums - Calculates and prints the sums of the two diagonals
 *                   of a square matrix.
 * @a: Pointer to the first element of the matrix (cast from int[][]).
 * @size: The size (number of rows/columns) of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%ld, %ld\n", sum1, sum2);
}
