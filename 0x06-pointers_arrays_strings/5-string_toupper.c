#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string to be changed
 *
 * Return: A pointer to the changed string
 */

char *string_toupper(char *str)
{
	int insert = 0;

	while (str[insert])
	{
		if (str[insert] >= 'a' && str[insert] <= 'z')
			str[insert] -= 32;

		index++;
	}
	return (str);
}
