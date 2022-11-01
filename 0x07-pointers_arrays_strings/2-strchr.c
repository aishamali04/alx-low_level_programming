#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string variable
 * @c: character
 * Return: pointer to first occurence of the character c, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
}
