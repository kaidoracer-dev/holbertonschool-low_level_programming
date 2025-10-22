#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';

	for (; n <= 'z'; n++)

		putchar(n);

	char N = 'A';

	for (; N <= 'Z'; N++)

		putchar(N);

	putchar('\n');

	return (0);


}
