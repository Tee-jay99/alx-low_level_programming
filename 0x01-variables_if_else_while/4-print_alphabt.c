#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *Description: output all letters in the alphabets except q and e
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
