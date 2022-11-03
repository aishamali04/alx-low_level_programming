#include "main.h"

/**
 * sqrt_search - searches for the square root
 * @n: the number
 * @x: iterator
 * Return: the square root, otherwise -1
 */

int sqrt_search(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
		{
			return (x);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + sqrt_search(n, x + 1));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (sqrt_search(n, 2));
	}
}
