#include "main.h"
/**
 *_puts_recursion - main function
 * @s: parameter to be operated
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
