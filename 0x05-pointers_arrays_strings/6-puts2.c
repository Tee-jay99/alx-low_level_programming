#include "main.h"

/**
 * puts2 - prints every other charactrs in a string followed by a new line
 *
 * @str: pointer to input string
 *
 */
void puts2(char *str)
{
	int insert = 0
		while (insert >= 0)
		{
			if (str[insert] == '\0')
			{
				_putchar('\n');
				break;
			}
			if (insert % 2 == 0)
				_putchar(str[insert]);
			insert++;
		}
}
