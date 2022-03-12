#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	char letter;

	for (n = 48; n <58; n++)
	{
		putchar(n);
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}


