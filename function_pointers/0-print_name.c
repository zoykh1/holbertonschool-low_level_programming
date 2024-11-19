#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: A pointer to the function that will print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
