#include "main.h"

/**
 * _strcmp - afunction that compares two strings
 * @s1: an input string
 *@s2: an input string
 *Return: The differences s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
