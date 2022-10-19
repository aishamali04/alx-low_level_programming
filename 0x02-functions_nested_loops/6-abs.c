#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *@x: variable
 *Return: absolute value if successful
 */
int _abs(int x)
{
	int absval;

	if (x < 0)
	{
		absval = x * (-1);
	}
	else
	{
		return (0);
	}
	return (absval);
}
