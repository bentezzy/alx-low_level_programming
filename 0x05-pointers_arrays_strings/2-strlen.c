#include "main.h"

/**
 * _strlen - main function
 * @s: parameter to be counted
 *
 * Return: return length
 */

int _strlen(char *s)
{
	int a;
	int length = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		length++;
	}
	return (length);
}
