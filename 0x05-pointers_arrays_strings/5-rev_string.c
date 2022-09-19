#include "main.h"

/**
 * rev_string - fuction that reverse a string
 * followed by a new line
 * @s: an input string
 *
 * Return: 0
 */
void rev_string(char *s)
{
int len = 0, i, length;
char c;

while (*(s + len) != '\0')
{
len++;
}
length = len;
len--;
for (i = 0; i < length / 2; i++)
{

c = *(s + i);
*(s + i) = *(s + len);
*(s + len) = c;
len--;
}
}
