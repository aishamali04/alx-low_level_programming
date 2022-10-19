#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @x: last digit
 * Return: value of last digit
 */
int print_last_digit(int x)
{
	int last_digit;

	x = x % 10;

	/**
	 *possibility of x being negative,
	 * therefore, we check for x < 0
	 */
	if (x < 0)
	{
		x = x * (-1);
	}

	last_digit = x;
	return (last_digit);
}
