#include <stdio.h>
/**
 *  main - program which prints the alphabet in lowercase and upper case
 *
 *  Return: Always return 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}

