#include "main.h"

int real_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - main function
 * @n: parameter to be operated
 *
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - sqrrt recursion function
 * @n: parameter 1
 * @a: parameter 2
 *
 * Return: square root
 */

int real_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (real_sqrt_recursion(n, a + 1));
}
