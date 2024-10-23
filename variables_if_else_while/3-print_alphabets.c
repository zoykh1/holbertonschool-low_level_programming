#include <stdio.h>

/**
 * main - fonction putchar
 * Return: 0
*/

int main(void)
{
char letter;
char Mletter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (Mletter = 'A'; Mletter <= 'Z'; Mletter++)
{
putchar(Mletter);
}
putchar('\n');
return (0);
}
