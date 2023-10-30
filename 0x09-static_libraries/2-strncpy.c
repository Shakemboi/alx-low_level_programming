#include "main.h"

/**
  * _strncpy - The main function that copies
  *
  * @src: Function parameter 0ne
  *
  * @dest: Function parameter two
  *
  * @n: Function parameter three
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
	dest[k] = src[k];
	k++;
	}
	while  (k < n)
	{
	dest[k] = '\0';
	k++;
	}
	return (dest);
}
