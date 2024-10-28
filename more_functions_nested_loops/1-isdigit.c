#include "main.h"

/**
 * _isdigit - vérifie si un caractère est un chiffre
 * @c: le caractère à vérifier
 * Return: 1 si c'est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
