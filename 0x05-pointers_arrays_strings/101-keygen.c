#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main method
 * Return: 0
 */

int main(void)
{
	int x = 0;
	int y = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (y < 2772)
	{
		x = rand() % 128;
		if ((x + y) > 2772)
			break;
		y = x + y;
		printf("%c", x);
	}
	printf("%c\n", (2772 - y));
	return (0);
}

