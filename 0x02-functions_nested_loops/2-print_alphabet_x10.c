#include "main.h"
/**
 * print_alphabet_x10 - this prints alphabets 10 times each
 */
void print_alphabet_x10(void)
{
	char x;
	int size;

	for (x = 'a'; x <= 'z'; x++)
	{
		for (size = 0; size < 10; size++)
		{
			_putchar (x);
		}
	}
	_putchar ('\n');
}
