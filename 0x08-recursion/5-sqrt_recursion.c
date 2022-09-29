#include "main.h"
/**
 * -sqrt_recursion - returns the square root of value n
 *  @n: input integer
 *  Return: The square root of n
 */
int _sqr_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqr(1, n));
}
