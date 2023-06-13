#include "main.h"
/**
 * Factorial - returns the factorial of a given number
 *
 * @n: numberto return the factorial from
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
