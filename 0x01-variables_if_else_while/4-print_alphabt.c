#include <stdio.h>

/**
 * main - Print some letters of alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
