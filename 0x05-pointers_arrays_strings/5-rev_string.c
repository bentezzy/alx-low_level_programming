#include "main.h"

/**
 * rev_string - main function
 * @s: parameter to be operated
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	char b = s[0];
	int count = 0;
	int a;

	while (s[count] != '\0')
		count++;
	for (a = 0; a < count; a++)
	{
		count--;
		b = s[a];
		s[a] = s[count];
		s[count] = b;
	}
}
