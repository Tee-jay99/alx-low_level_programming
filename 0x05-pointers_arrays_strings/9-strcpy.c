#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string pointed to by src to the buffer
 * @src: source
 * @dest: destination
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int insert = 0;

	while (insert >= 0)
	{
		*(dest + insert) = *(src + insert);
		if (*(src + insert) == '\0')
			break;
		insert++;
	}
	return (dest);
}
