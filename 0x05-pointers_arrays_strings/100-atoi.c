#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int x = 0;
	int y = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);
	return (n);
}
