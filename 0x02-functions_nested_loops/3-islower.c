#include "main.h"
/**
 * _islower - checks for lower case letters
 * @c:variable
 * Return: 1 if c is lower, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
