#include "main.h"
#include <stdio.h>
/**
  *leet -  function that encodes a string
  *
  * @n: Function parameter
  *
  *Return: value of n
 */

char *leet(char *n)
{
	int h, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (h = 0; n[h] != '\0'; h++)
	{
	for (r = 0; r < 10; r++)
	{
	if (n[h] == s1[r])
	{
	n[h] = s2[r];
	}
	}
	}
	return (n);
}
