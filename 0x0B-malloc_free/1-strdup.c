#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string to a new allocated memory
 * @str: the string to be copied
 * Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int length_of_string = 0;

	if (str == NULL)
		return ('\0');
	while (*(str + length_of_string) != '\0')
		length_of_string++;

	alloc_mem = malloc(sizeof(*str) * length_of_string);

	if (alloc_mem == NULL)
		return ('\0');
	for (i - 0; i < length_of_string; i++)
		alloc_mem[i] = *(str + 1);
	alloc_mem[i] = '\0';

	return (alloc_mem);
}
