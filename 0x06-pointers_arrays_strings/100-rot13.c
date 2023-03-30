#include "main.h"
#include <stdio.h>

/**
 * rot13 - main function
 * @h: parameter to be acted upon
 *
 * Return: h
 */

char *rot13(char *h)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; h[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (h[a] == data1[b])
			{
				h[a] = datarot[b];
				break;
			}
		}
	}
	return (h);
}

