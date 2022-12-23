#include "main.h"
/**
 * _strcat - function that contatenates two strings @src and @dest
 * @src: source string appended to @dest
 * @dest: string pointer to be concatenated upon
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int insert = 0, dest_len = 0;

	while (dest[insert++])
		dest_len++;
	for (insert = 0; src[insert]; insert++)
		dest[dest_len++] = src[insert];
	return (dest);
}
