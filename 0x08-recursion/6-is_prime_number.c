#include "main.h"

/**
 * search_prime - searches for prime number
 * @n: the number
 * @x: iterator
 * Return: 1 is n is a prime number, 0 otherwise
 */

int search_prime(int n, int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + search_prime(n, x + 1));
}
/**
 * is_prime_number - checks for a prime number
 * @n: the number
 * Return: 1 if a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (0 + search_prime(n, 2));
}

