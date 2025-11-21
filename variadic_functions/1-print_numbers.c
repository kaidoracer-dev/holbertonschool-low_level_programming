#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers passed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int value = 0;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		va_end(args);
		return;
	}


	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
