#include "main.h"
/**
 * print_line - prints a straight line using _
 * @n: variable, no of times _ should be printed
 */
void print_line(int n)
{
	for (; n > 0; n++)
	{
		if (n < 0)
		{
			_putchar ('\n');
		}
		else
		{
			_putchar (95);
		}
	}
}
