#include "main.h"
/**
 * factorial - function that calculates a factorial of a number
 * @n: parameter to be acted on
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
