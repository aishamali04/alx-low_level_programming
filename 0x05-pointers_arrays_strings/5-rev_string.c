#include "main.h"

/**
 * rev_string - func to reverse string
 * @s: variable
 */

void rev_string(char *s)
{
	int str_count = 0;
	int x;
	int y;
	char *str;
	char temp;

	while (str_count >= 0)
	{
		if (s[str_count] == '\0')
			break;
		str_count++;
	}
	str = s;

	for (x = 0; x < (str_count - 1); x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			temp = *(str + y);
			*(str + y) = *(str + (y - 1));
			*(str + (y - 1)) = temp;
		}
	}
}
