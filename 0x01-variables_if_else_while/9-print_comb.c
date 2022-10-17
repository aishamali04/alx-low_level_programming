#include <stdio.h>
/**
 * main: entry point
 * Return: 0 is successful
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar (x);
		if (x == 9)
		{
			putchar (',');
		}
		else
		{
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
