#include "main.h"
/**
 * _is_prime - checks if a number is prime using recursion
 * @n: number to evaluate
 * @i: divisor starting from 2
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime(int n, int i)
{
	if (i * i > n)

		return (1);

	else if (n % i == 0)

		return (0);
	else
		return (_is_prime(n, i + 1));

}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime(n, 2));
}
