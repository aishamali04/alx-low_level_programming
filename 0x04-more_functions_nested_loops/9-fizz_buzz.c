#include <stdio.h>
/**
 * main - prints Fizz for multiples of 3 and Buzz for muls of 5
 * Return: 0 is success
 */
int main(void)
{
	int x;
	int i = 100;

	for (x = 1; x <= i; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
