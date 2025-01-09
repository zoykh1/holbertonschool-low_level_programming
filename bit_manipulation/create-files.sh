#!/bin/bash

# Create main.h
cat <<EOL > main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* MAIN_H */
EOL
echo "Created main.h"

# Create 0-binary_to_uint.c
cat <<EOL > 0-binary_to_uint.c
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    if (!b)
        return (0);

    for (; *b; b++)
    {
        if (*b != '0' && *b != '1')
            return (0);
        num = num * 2 + (*b - '0');
    }

    return (num);
}
EOL
echo "Created 0-binary_to_uint.c"

# Create 1-print_binary.c
cat <<EOL > 1-print_binary.c
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);
    putchar((n & 1) + '0');
}
EOL
echo "Created 1-print_binary.c"

# Create 2-get_bit.c
cat <<EOL > 2-get_bit.c
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to check.
 * @index: Index of the bit.
 *
 * Return: Value of the bit at index or -1 if error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);
    return ((n >> index) & 1);
}
EOL
echo "Created 2-get_bit.c"

# Create 3-set_bit.c
cat <<EOL > 3-set_bit.c
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number.
 * @index: Index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);
    *n |= (1UL << index);
    return (1);
}
EOL
echo "Created 3-set_bit.c"

# Create 4-clear_bit.c
cat <<EOL > 4-clear_bit.c
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);
    *n &= ~(1UL << index);
    return (1);
}
EOL
echo "Created 4-clear_bit.c"

# Create 5-flip_bits.c
cat <<EOL > 5-flip_bits.c
#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor = n ^ m;
    unsigned int count = 0;

    while (xor)
    {
        count += xor & 1;
        xor >>= 1;
    }

    return (count);
}
EOL
echo "Created 5-flip_bits.c"

# Create main test files
for i in {0..5}
do
cat <<EOL > $i-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - Test file for task $i.
 *
 * Return: Always 0.
 */
int main(void)
{
    // Add your tests for task $i here
    return (0);
}
EOL
echo "Created $i-main.c"
done

echo "All files created successfully!"
