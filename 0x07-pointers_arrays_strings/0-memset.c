#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n:  number of bytes
 * @b: the constant byte
 * @s: memory area
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
