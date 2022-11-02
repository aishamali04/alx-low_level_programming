#include "main.h"

/**
 * factorial - prints factorial of a given number
 * @n: given number
 * Return: -1 if less than 0, else 1 if 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial (n -1));
	}
}
