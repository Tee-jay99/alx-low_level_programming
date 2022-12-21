#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: pointer to input string
 *
 */
void rev_string(char *s)
{
	int insert = 0;
	int i, j;
	char *str, temp;

	while (insert >= 0)
	{
		if (s[insert] == '\0')
			break;
		insert++;
	}
	str = s;
	for (i = 0; i < (insert - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1) = temp;
					}
					}
					}
