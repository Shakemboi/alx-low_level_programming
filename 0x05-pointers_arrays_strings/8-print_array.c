#include "main.h"

/**
 * print_array - nction that prints n elements of an array of integers
 * followed by a new line.
 * @a: Array of the integer
 * @n: number to be printed
 * Return: n
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
