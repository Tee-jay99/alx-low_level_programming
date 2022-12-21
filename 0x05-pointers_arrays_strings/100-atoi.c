#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer for string  input
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int insert = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + insert) != '\0')
	{
		if (size > 0 && (*(s + insert) < '0' || *(s + insert) > '9'))
			break;
		if (*(s + insert) == '-')
			pn *= -1;

		if ((*(s + insert) >= '0') && (*(s + insert) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		insert++;
	}

	for (i = insert - size; i < insert; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi + pn);
}
