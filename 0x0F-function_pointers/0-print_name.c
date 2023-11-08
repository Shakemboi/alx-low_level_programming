#include "function_pointers.h"
#include <stdio.h>

/**
 *  print_name - a function that prints name
 *  @name: string to be added
 *  @f: the pointer to the function
 *  Return: zero
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
