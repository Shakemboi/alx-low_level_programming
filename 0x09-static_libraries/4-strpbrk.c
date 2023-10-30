#include "main.h"

/**
  * _strpbrk - a function that searches a string for any of a set of bytes
  *
  * @s: function parameter one
  *
  * @accept: Fuunction parameter two
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int h, j;

	for (h = 0; s[h] != '\0'; h++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[h] == accept[j])
	return (s + h);
	}
	}
	return (0);
}
