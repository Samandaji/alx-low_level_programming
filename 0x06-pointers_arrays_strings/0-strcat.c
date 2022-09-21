#include "main.h"
/**
 * _strcat - concatenates two string and return a string
 * @dest: first string
 * @src: second string
 * Return: character pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
			i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
