#include "main.h"

/**
 * leet - function for operation
 * @h: parameter on action
 *
 * Return: h
 */

char *leet(char *h)
{
	int a, b;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; h[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (h[a] == s1[b])
			{
				h[a] = s2[b];
			}
		}
	}
	return (h);
}
