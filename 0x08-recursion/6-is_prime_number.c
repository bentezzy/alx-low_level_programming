#include "main.h"

int real_prime(int n, int a);

/**
 * is_prime_number - main function
 * @n: parameter to be acted on
 *
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - function that returns prime number
 * @n: parameter 1
 * @a: parameter 2
 *
 * Return: prime number
 */

int real_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (real_prime(n, a - 1));
}
