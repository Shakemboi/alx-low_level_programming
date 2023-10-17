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
	if (n > 0)
	{
		int i = 0;

		n--;

		for (; i < n; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
		return;
	}
	printf("\n");
}
