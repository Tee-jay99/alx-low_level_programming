#include "main.h"

/**
 * _strncpy - copies at most n number of bytes from src to dest
 * @src: pointer string to be copied
 * @dest: pointer string to be copied into
 * @n: maximu number of bytes to be copied from src
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int insert = 0, src_len = 0;

	while (src[insert++])
	src_len++;
	for (insert = 0; src[insert] && insert < n; insert++)
	dest[insert] = src[insert]
	for (insert = src_len; insert < n; insert++)
	dest[insert] = '\0';
	return (dest);
	}
