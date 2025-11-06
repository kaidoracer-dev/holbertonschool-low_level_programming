#include "main.h"
/**
 * _sqrt_helper - helper function to find the natural square root
 * @n: number to find the square root of
 * @i: current number to test as square root
 *
 * Return: natural square root, or -1 if none
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)

		return (i);

	if (i * i > n)

		return (-1);

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to compute square root of
 *
 * Return: natural square root, or -1 if n has no natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
