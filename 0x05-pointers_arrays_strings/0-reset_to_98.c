#include "main.h"

/**
 * reset_to_98 - takes a pointer to and updates the value to 98
 * @*n: pointer
 */

void reset_to_98(int *n)
{
	int x;
	
	*n = &x;

	n = 98;
}
