#include "main.h"
int _sqrt(int prev, int root);
/**
 * -sqrt_recursion - returns the square root of value n
 *  @n: input integer
 *  Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqr(1, n));
}

/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root of integer n
 */
int _sqr(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
