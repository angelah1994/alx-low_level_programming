#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Holberton ", "school !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
