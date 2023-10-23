#include "main.h"

/**
  * _memcpy - a function that copies memory area
  *
  * @src: Source parameter
  *
  * @dest: Destination parameter
  *
  * @n: Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	dest[j] = src[j];
	}
	return (dest);
}
