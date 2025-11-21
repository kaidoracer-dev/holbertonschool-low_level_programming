#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its arguments
 * @n: number of arguments
 *
 * Return: sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	int value = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
			sum += value;
	}
	va_end(args);

	return (sum);
}
