#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int N = 'a';

	for (; n <= '9'; n++)

		putchar(n);

	for (; N <= 'f'; N++)

		putchar(N);

	putchar('\n');

	return (0);


}
