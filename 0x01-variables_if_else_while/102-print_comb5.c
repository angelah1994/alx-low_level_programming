#include <stdio.h>

/**
 * main - prints all possible combinations of two digits numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i, k, j;

	for (c = 48; c <= 57, c++)
	{
		for (i = 48; k <= 57; i++)
		{
			for (k = 48 k<= 57; k++)
			{
				for 9 j = 48; j <= 57; j++)
				{
					if (((k + j) > (c + 1) && k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

						if (c + i + K + j == 227 && c == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
			           				
