#include "main.h"

/**
 *  _strcat - function that concatenates two strings
 *  @dest: entered value
 *  @src: entered value
 *
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int h;

	r = 0;

	while (dest[r] != '\0')
	{
		r++;
	}
	h = 0;

	while (src[h] != '\0')
	{
		dest[r] = src[h];
		r++;
		h++;
	}
	dest[r] = '\0';
	return (dest);
}
