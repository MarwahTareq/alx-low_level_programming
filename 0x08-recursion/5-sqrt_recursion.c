#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: returns the natural square root of a number
 *@val: square root
 * Return: that returns the natural square root
 */
int square(int n, int val)
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * actual_sqrt_recursion - recureses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting sqaure root
 */
int square(int n, int val)
{
	if (val * val == n)

		return (val);
else if (val * val < n)
		return (square(n, val + 1));
	else 
	return (-1);
}
