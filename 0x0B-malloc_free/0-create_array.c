#include <stdlib.h>
/**
 * create_array - Create an array and initiate with a given
 * number
 * @c: character c
 * @size: size of the array to be created
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');
	arr = malloc(size);

	if (arr == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[size] = '\0';

	return (arr);
}
