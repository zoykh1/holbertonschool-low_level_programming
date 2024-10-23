#include <stdio.h>

/**
 * main - Desc de la fonction
 * Return: Desc de la fonction
*/

int main(void)
{
char num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num < '9')
{
putchar(',');
putchar(' ');
continue;
}
}
putchar('\n');
return (0);
}
