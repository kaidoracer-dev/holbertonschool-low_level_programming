#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 *
 * Description: Swaps characters from start to end until the middle
 * is reached. The string is modified directly; no return value.
 */
void rev_string(char *s)
{
	int n = 0, i = 0;

	char t;

	while (s[i] != 0)
	{
		i++;
	}

	i--;

	while (n < i)
	{
		t = s[n];
		s[n] = s[i];
		s[i] = t;

		n++;
		i--;
	}
}
