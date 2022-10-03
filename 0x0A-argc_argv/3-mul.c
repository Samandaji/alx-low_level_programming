#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main function
 * atoi - a function that convert string to an int
 * @argc: argument c
 * @argv: vector array
 * Return: always 0
 */
int main( int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}

