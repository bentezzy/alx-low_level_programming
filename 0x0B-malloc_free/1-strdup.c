#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function on operation
 * @str: string to be operated
 *
 * Return: (aaa) or null
 */

char *_strdup(char *str)
{
	char *aaa;
	int b, d = 0;

	if (str == NULL)
		return (NULL);
	b = 0;

	while (str[b] != '\0')

		b++;

	aaa = malloc(sizeof(char) * (b + 1));

	if (aaa == NULL)
		return (NULL);

	for (d = 0; str[d]; d++)

		aaa[d] = str[d];

	return (aaa);
}

