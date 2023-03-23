#include "main.h"

/**
 *  print_line - main function
 *  @n: parameter to be operated
 *
 *  Return: always 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
