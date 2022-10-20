#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar (x);
	}
	putchar('\n');
	return (0);
}
