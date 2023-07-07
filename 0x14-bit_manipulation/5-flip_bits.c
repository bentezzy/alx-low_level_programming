#include "main.h"

/**
 * flip_bits - function that counts bits to change
 * @n: num 1
 * @m: num 2
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int count = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = excl >> a;
		if (curr & 1)
			count++;
	}
	return (count);
}
