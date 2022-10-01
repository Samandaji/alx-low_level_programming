#include "main.h"

/**
 * print_line - draw a line on the terminal
 *
 * @n: Integer amount _
 *
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
