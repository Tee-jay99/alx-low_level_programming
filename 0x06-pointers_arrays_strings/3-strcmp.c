#include "main.h"

/**
 * _strcmp - commpares two strings s1 and s2
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: if s1 > s2, positive difference
 * if s1 < s2, negative difference
 * if s1 == s2, 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
