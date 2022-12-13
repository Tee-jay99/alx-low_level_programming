#include <stdio.h>
#include <stdlib.h>

/**
 * main - output alphabets in lowercase
 * Return: 0
 *
 */

int main(void)
{
	int ch;
	ch = 'a';

	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
