#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural nums upto 98
 * @n: variable
 * Return: 0 is success
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
