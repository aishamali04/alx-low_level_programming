#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination variable
 * @src: source variable
 * @n: number of bytes from src
 * Return: pointer to destination
 */

char *_strncat(char *dest, char  *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
