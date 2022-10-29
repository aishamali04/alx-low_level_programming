#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination variable
 * @src: source variable
 * @n: number of bytes
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; (x < n; && src[x] != '\0';) x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
