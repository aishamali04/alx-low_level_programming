#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: num of elements to swap
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int temp;

	for ( x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			temp = *(a + y);
			*(a + y) = *(a + (y -1));
			*(a + (y - 1)) = temp;
		}
	}
}
