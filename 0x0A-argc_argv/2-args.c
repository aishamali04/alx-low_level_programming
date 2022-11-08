#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method
 * @argc: arg count
 * @argv: arg vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
