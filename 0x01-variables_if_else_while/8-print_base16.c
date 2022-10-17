#include <stdio.h>
/**
 * main: entry point
 * Return: 0 if successful
 */

int main(void)
{
	int x;
	char hexvals[] = "0123456789abcdef";

	for (x = 0; x < 16; x++)
	{
		putchar(hexvals[x]);
	}
	putchar('\n');
	return (0);
}
