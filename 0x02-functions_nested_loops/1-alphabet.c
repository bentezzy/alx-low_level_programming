#include "main.h"
/**
 * print_alphabet - a function that prints all aphabets in small letters
 * return: always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
