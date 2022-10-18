#include <stdio.h>
#include "main.h"

/**
 * main : entry point
 * Return: 0 is successful
 */

int main (void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
		_putchar('\n');
	}
	return (0);
}
