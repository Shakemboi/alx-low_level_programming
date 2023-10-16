#include "main.h"

/**
 * print_rev - unction that prints a string, in reverse.
 * followed by a new line
 * @s: string
 * Return: n
 */
void print_rev(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
