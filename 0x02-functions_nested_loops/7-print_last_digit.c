#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @j: parameter of function
 *
 * Return: always return (z)
 */

int print_last_digit(int j)
{
	int z;

	z = j % 10;
	if (j < 0)
		z = -z;
	_putchar(z + '0');
	return (z);
}
