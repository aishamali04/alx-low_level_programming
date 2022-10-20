#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural nums upto 98
 * @n: variable
 * Return: 0 is success
 */
void print_to_98(int n)
{
	if (n >= 0)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else (n < 0)
	{
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
