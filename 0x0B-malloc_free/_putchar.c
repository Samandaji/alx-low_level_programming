#include <unistd.h>
/**
 * _putchar - print character c to std out
 * @c: The character to print
 * Return: 1 or zero
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
