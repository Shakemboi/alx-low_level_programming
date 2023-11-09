#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function
 * @...: A variable number of paramters to calculate the sum of
 * Return: If n == 0 - 0
 * otherwise: the sum of parameters given
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int r, sum = 0;

	va_start(ap, n);
	for (r = 0; r < n; r++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
