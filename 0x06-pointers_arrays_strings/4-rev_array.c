#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: first function parameter
  *
  * @n: second function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int k, q;

	for (k = 0; k < n--; k++)
	{
	q = a[k];
	a[k] = a[n];
	a[n] = q;
	}
}
