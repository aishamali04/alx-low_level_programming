#include <stdio.h>
#include "main.h"

/**
 * print_array - print elements in an array
 * @a: variable 1
 * @n: number of elements in array
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(",");
	}
	printf("\n");
}
