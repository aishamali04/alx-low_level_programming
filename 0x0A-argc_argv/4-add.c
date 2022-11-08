#include <stdio.h>
#include <stdlib.h>

int is_number(char *str);
/**
 * main - main method
 * @argc: arg count
 * @argv: arg vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int y;

	if (argc > 1)
	{
		for (y = 1; y < argc; y++)
		{
			if (is_number(argv[y]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
				x += strtol(argv[y], NULL, 10);
		}
		printf("%d\n", x);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	exit(EXIT_SUCCESS);
}
/**
 * is_number - checks for a number
 * @str: variable
 * Return: 0, otherwise 1
 */

int is_number(char *str)
{
	int f = 0;
	
	if (str[0] == '-')
		f = 1;
	for (; str[f]; f++)
	{
		if (*(str + f) < '0' || *(str + f) > '9')
			return (1);
	}
	return (0);
}
