#include "main.h"

/**
 * jack_bauer - function that prints every 24 hour minute
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int e, f;

	for (e = 0; e < 24; e++)
	{
		for (f = 0; f < 60; f++)
		{
			_putchar(e / 10 + '0');
			_putchar(e % 10 + '0');
			_putchar(':');
			_putchar(f / 10 + '0');
			_putchar(f % 10 + '0');
			_putchar('\n');
		}
	}
}
