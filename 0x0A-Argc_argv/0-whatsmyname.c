#include "main.h"
#include <stdio.h>
void print_string(char *str);
/**
 * main - prints its name
 *
 * @argc: lenth of argv
 * @argv: Arrays of string of the program arguments
 * Return: 0
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	print_string(argv[]);
	putchar('\n');
	return (0);
}

/**
 * print_string - [prints all character of a string
 * @str: pointer to a string
 * Return: void
 */
void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		putchar(str[i]);
		i++;
	}
}
