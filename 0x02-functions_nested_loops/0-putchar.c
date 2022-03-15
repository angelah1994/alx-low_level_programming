#include <stdio.h>
#include "main.h"

/**
 *  * main -Function main entry
 *
 *  Program that prints_putchar, followed by a new line
 *
 *  Return: always 0  (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int i;
	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}


