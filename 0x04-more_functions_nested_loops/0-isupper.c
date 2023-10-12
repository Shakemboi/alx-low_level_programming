#include "main.h"

/**
 * _isupper - is an uppercase
 * @c: char to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
