#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = '0'; x < '10'; x++)
	{
		for (y = '0'; y < '14'; y++)
		{
			_putchar (y);
		}
		_putchar (x);
	}
	_putchar ('\n');
}
