#include "main.h"

/**
 * _strcmp - cmpares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if both strings are equal, else another num
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; ((s1[x] != '\0') || (s2[x] != '\0')); x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
