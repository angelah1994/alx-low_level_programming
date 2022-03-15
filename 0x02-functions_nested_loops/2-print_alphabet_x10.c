#include "main.h"

/**
 * print alphabet_x10 -prints ten times the alphabet
 * in lower case, followed by new line
 *Return: Void
 */
void print_alphabet_x10(void)
{
	int counter;
	char x;

	for (counter = 0; counter <= 9; counter++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
