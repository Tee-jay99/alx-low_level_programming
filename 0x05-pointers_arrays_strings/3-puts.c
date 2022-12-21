#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: pointer to print the string
 * Return: void
 */
void _puts(char *str)
{
	int insert;

	for (insert = 0; str[insert] != '\0'; insert++)
		_puts(str[insert]);
}
