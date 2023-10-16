#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: n
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
