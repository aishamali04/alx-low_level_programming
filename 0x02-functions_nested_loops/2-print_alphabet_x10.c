#include "main.h"
/**
 * print_alphabet_x10 - this prints alphabets 10 times each
 */
void print_alphabet_x10(void)
{
	char x;
	char size;

	for (x = 'a'; x <= 'z'; x++)
	{
		while (size < 10)
		{
			_putchar (x);
		}
	}
	_putchar ('\n');
}
