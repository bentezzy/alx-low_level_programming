#include "main.h"

/**
 * print_rev - main function
 * @s: parameter to be acted upon
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int a;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (a = count; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
