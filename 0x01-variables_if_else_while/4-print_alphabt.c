#include <stdio.h>
/**
 * main: entry point
 * Return: 0 if successful
 */
int main(void)
{
	char x;

	for (x = 'a'; x <='z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
	putchar(x);
	}
	putchar('\n');
}
