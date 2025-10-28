#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4
 *
 * Description: This function prints the digits from 0 to 9 using _putchar,
 * skipping the digits 2 and 4, and then prints a newline at the end.
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{

		if (i != '2' && i != '4')

		_putchar(i);
	}

	_putchar('\n');
}
