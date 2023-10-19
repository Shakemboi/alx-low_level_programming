#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter one
  *
  * @src: Function parameter two
  *
  * @dest: Function parammeter three
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
