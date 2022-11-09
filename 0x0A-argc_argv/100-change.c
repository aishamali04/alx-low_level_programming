#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int change[] = {20, 15, 10, 5, 2, 1};
	int x;
	int y;
	int f;
	int n;
	int result = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
	}
	else
	{
		for (f = 0; f < 6; f++)
		{
			x = n / change[f];
			y = n % change[f];
			result += x;
			n = y;
		}
		printf("%d\n", result);
	}
exit(EXIT_SUCCESS);
}
