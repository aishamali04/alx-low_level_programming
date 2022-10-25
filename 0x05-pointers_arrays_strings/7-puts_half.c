#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: variable
 */

void puts_half(char *str)
{
	int str_count = 0;
	int x;

	while (str_count >= 0)
	{
		if (str[str_count] == '\0')
			break;
		str_count++;
	}
	if (str_count % 2 == 1)
	{
		x = str_count / 2;
	}
	else
	{
		x = (str_count - 1) / 2;
	}
	
	for (x++; x < str_count; x++)
		_putchar(str[x]);
	_putchar('\n');
}

