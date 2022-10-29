#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: string
 * Return: pointer to dest
 */

char *string_toupper(char *s)
{
	int str_count = 0;

	while (*(s _ str_count) != '\0')
	{
		if (((s + str_count) >= 97) && ((s + str_count) <= 122))
			*(s + str_count) = *(s + str_count) - 32;
		str_count ++;
	}
	return (s);
}
