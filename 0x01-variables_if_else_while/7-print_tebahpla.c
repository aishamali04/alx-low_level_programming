#include <stdio.h>
/**
 * main: entry point
 * short-description: print numbers in reverse
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x--)
	{
		putchar (x);
	}
	putchar('\n');
	return (0);
}
