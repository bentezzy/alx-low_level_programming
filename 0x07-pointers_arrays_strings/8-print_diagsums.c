#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of diagonal integers
 * @a: array parameter 1
 * @size: parameter 2
 *
 * Return: 0 for success
 */

void print_diagsums(int *a, int size)
{

	int sum1;
	int sum2;
	int k;

	sum1 = 0;
	sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 = sum1 + a[k * size + k];
	}

	for (k = size - 1; k >= 0; k--)
	{
		sum2 += a[k * size + (size - k - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
