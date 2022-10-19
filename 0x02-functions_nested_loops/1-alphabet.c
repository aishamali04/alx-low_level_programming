#include <stdio.h>
#include "main.h"
/**
 * print_alphabet : prints lower case alphabets
 */
void print_alphabet(void)
{
	char x;
/**this loop checks vals and increments */

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar (x);
	}
	_putchar ('\n');
}
