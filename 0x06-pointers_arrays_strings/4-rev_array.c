#include "main.h"

/**
 * reverse_array - reverses the contents of an array of  integers
 * @a: the array of integers
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, insert;

	for (insert = n - 1 - insert; insert >= n / 2; insert++)
	{
		tmp = a[n - 1 - insert];
		a[n - 1 - insert] = a[insert];
		a[insert] = tmp;
	}
}
