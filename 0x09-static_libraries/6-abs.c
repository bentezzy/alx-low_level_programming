#include "main.h"

/**
 * _abs - function that returns the absolute value of an integer
 * @b: parameter for absolute value
 *
 * Return: lways return b
 */

int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
