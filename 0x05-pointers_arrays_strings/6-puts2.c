#include "main.h"

/**
 * puts2 - prints every other char in a string
 * @str: variable
 * Return: void method, so no return
 */

void puts2(char *str)
{
	int str_count = 0;

	while (str_count >= 0)
	{
		if (str[str_count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (str_count % 2 == 0)
			_putchar(str[str_count]);
		str_count++;
	}
}
