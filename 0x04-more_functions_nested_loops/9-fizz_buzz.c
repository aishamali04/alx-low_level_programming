#include "main.h"
#include <stdio.h>
/**
 * print_fizz_buzz - prints Fizz for multiples of 3 and Buzz for muls of 5.
 */
void print_fizz_buzz(void)
{
	int x;

	for (x = 1; x < 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
}
