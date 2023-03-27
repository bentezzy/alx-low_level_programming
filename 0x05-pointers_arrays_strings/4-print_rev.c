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
	int length = 0;

	for (a = 0; s[a] != '\0'; a++)
		length++;
	for (a = length; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
