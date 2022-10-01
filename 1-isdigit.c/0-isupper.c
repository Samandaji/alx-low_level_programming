#include "main.h"

/**
 * _isupper - checks wether a character is upper case or not
 *
 * @c: contains the character
 *
 * Return: 1 if upper and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
