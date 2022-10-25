#include "main.h"

/**
 * _puts - print string to stdout
 * @str: variable
 */

void _puts(char *str)
{
	int str_count = 0;

	while (str_count >= 0)
	{
		if (str[str_count] == '\0')
		{
			_putchar('\n');
		}
		_putchar(str[str_count]);
		str_count++;
	}
}
