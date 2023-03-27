#include "main.h"

/**
 * puts2 - main function
 * @str: operant parameter
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int count = 0;
	int b = 0;
	char *t = str;
	int a;

	while (*t != '\0')
	{
		t++;
		count++;
	}
	b = count - 1;
	for (a = 0; a <= b; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
