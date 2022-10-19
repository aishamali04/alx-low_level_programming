#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
/** initialize minutes, hours */
	int minute;
	int minutes;
	int hour;
	int hours;

	for  (hour = 0; hour <= 2; hour++)
	{
		for (hours = 0; hours <= 9; hours++)
		{
			for (minute = 0; minute <= '5'; minute++)
			{
				for (minutes = 0; minutes <= 9; minutes++)
				{
					if (hour == 2 && hours > 3)
				{
					break;
				}
				_putchar (hour + '0');
				_putchar (hours + '0');
				_putchar (':');
				_putchar (minute + '0');
				_putchar (minutes + '0');
				_putchar('\n');
			}
		}
	}
}

