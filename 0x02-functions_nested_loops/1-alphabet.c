
#include "main.h"

/**
 * main - check the code
 *Description: returns the alphabet in lower case followed by new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
