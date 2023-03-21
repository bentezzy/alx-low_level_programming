#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that print n numbers
 *
 * @n: parameter of function
 *
 * return: always 0
 */

void print_to_98(int n)
{
	int f;

	if (n >= 0 && n <= 98)
	{
		for (f = n; f <= 98; f++)
		{
			printf("%d, ", f);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (f = n; f <= 98; f++)
		{
			printf("%d, ", f);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (f = n; f >= 98; f--)
		{
			printf("%d, ", f);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d, ", n);
}
