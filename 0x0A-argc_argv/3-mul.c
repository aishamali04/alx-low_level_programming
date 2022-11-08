#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method
 * @argc: arg count
 * @argv: vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int x = 1;
	int y;

	if (argc == 3)
	{
		for (y = 1; y < argc, y++)
			x = x * strtol(argv[y], NULL, 10);
		printf("%d\n", x);
	}
	else
	{
		printf("Errot\n");
		return (1);
	}
	return (0);
}
