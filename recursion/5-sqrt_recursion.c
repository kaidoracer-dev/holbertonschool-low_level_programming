#include "main.h"
/**
 * _sqrt_helper - helper function to find the natural square root
 * @n: number to find the square root of
 * @i: current candidate for the square root
 *
 * Return: natural square root of n, or -1 if none exists
 */
int _sqrt_helper(int n, int i)
{	
	if (i * i == n)
	
		return i;
	
	if (i * i > n)
	
		return -1;
	
	return _sqrt_helper(n, i + 1);
}

int _sqrt_recursion(int n) 
{
	if (n < 0)
		return -1;
	return _sqrt_helper(n, 0);
}