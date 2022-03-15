#include "main.h"

/**
 * prints_alphabet_x10 -check main.h
 * description:Function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: nothing
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
