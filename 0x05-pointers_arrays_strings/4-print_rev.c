#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be inputed
 *
 */
void print_rev(char *s)
{
	int insert;

	for (insert = 0; s[insert] != '\0'; insert++)
		;
	for (insert = insert - 1; s[insert] != '\0'; insert--)
	{
		_putchar(s[insert]);
	}
	_putchar('\n');
}
