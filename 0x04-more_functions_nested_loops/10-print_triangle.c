#include "main.h"
/**
 * print_triangle - prints the shape of a triangle using #
 * @size: variable, size of the triangle
 */
void print_triangle(int size)
{
	for (; size > 0; size++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('#');
		}
	}
}
