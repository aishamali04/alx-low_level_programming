#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array -func that creates and arrays and initializes it with a char
 * @c: character
 * @size: num of bytes to allocate
 * Return: pointer to array, otherwise null
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
		array[size] = c;
	return (array);
}
