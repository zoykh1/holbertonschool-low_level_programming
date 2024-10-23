#include <stdio.h>

/**
 * main - main_fonction
 * Return: 0
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
continue;
putchar(letter);
}

putchar('\n');
return (0);
}
