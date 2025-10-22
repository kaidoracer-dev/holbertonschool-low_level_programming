#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';
	char N = 'A';
        
	for (; n <= 'z'; n++)

		putchar(n);


        for (; N <= 'Z'; N++)

                putchar(N);

        putchar('\n');

        return (0);


}
