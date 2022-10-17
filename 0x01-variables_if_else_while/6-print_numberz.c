#include <stdio.h>
/**
 * main: entry point
 * Description: print numbers without char
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
