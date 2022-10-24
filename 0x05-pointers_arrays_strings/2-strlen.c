#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: variable
 * Return: length of given string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != 0)
	{
		x++;
	}
	return (x);
}
