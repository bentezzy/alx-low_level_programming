#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet 10 times in small letters
 * return: 0
 */

void print_alphabet_x10(void)
{
	int k;
	char l;

	for (k = 1; k <= 10; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
