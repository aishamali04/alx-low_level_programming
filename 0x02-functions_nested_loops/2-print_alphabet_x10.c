#include "main.h"
/**
 * print_alphabet_x10 - this prints alphabets 10 times each
 */
void print_alphabet_x10(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		int size;

		while (size < 10)
		{
			_putchar (x);
		}
	}
	_putchar ('\n');
}
