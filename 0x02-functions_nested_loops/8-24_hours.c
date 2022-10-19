#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
/** initialize minutes, hours */
	int minutes;
	int hours;
	int time;
	int count;

	for (count = 0; count <= 2; count++)
	{
		for  (hours >= 0; hours <= 23; hours++)
		{
			for (minutes >= 0; minutes <= 59; minutes++)
			{
				if (count == 2)
				{
					break;
				}
				_putchar (hours + '0');
				_putchar (minutes + '0');
				_putchar('\n');
			}
		}
	}
}

