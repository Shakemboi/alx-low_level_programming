#include "main.h"

/**
 * _puts - a function that prints a string  to stdout.
 * followed by a new line
 * @str: to be printed
 * Returns: n
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar('\n');
}
