#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  *
  * @size: first function parameter
  *
  * @a: second function parameter
  *
  * Return: Always 0.
  */

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int g;

	count1 = 0;
	count2 = 0;

	for (g = 0; g < size; g++)
	{
	count1 = count1 + a[g * size + g];
	}
	for (g = size - 1; g >= 0; g--)
	{
	count2 += a[g * size + (size - g - 1)];
	}
	printf("%d, %d\n", count1, count2);
}

