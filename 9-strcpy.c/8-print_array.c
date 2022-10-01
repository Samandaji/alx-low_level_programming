#include "main.h"
/**
 * print_array - print nth elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
		{
			printf(" , ");
		}
	}
           putchar("\n");
}
