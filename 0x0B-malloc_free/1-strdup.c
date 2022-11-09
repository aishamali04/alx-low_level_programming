#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies given string as param
 * @str: given string
 * Return: poiner to string or NULL
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int x;
	unsigned int length;

	x = 0;
	length = 0;

	if (!str == '\0')
	{
		return (NULL);
	}
	while (str[length])
		length++;
	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while ((s[x] = str[x]) != '\0')
		x++;
	return (s);
}

