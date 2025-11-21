#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints any combination of char, int, float, and string
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char c;
	int n;
	double f;
	char *s;
	char *sep = "";

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", sep, c);
		}
		if (format[i] == 'i')
		{
			n = va_arg(args, int);
			printf("%s%d", sep, n);
		}
		if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", sep, f);
		}
		if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("%s(nil)", sep);
			else
				printf("%s%s", sep, s);
		}
		sep = ", ";
		i++;
	}
	va_end(args);

	printf("\n");
}
