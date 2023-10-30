#include "main.h"

/**
  * _strspn - 
  *
  * @s: Function parameter
  *
  * @accept: Function parameter
  *
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int e;

	while (*s)
	{
	for (e = 0; accept[e]; e++)
	{
	if (*s == accept[e])
	{
	i++;
	break;
	}
	else if (accept[e + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
