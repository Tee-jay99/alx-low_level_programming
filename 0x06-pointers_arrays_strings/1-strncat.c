#include "main.h"

/**
 * _strncat - concatenates two strings and use at most n bytes from @src
 *  @src: pointer string to be appended to dest
 *  @dest: pointer string that will be concatenated upon
 *  @n: maximum number of bytes from src to @dest
 *  Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int insert = 0, dest_len = 0;

	while (dest[insert++])
		dest_len++;
	for (insert = 0; src[insert] && insert < n; insert++)
		dest[dest_len] = src[insert];
	return (dest);
}
