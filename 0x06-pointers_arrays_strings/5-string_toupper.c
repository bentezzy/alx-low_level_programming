#include "main.h"

/**
 * string_toupper - function that converts string to uppercase
 * @h: array
 *
 * Return: h
 */

char *string_toupper(char *h)
{
	int t;

	t = 0;
	while (h[t] != '\0')
	{
		if (h[t] >= 'a' && h[t] <= 'z')
			h[t] = h[t] - 32;
		t++;

	}
	return (h);
}
