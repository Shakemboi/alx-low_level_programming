#include "main.h"

/**
 * flip_bits - a program that counts the
 * number of bits to be changed
 * to get from one number to another
 * @n: first number to be used
 * @m: second number to be used
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}

