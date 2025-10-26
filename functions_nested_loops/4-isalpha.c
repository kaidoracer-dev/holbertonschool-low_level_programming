#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Checks if a character is a letter,lowercase or uppercase
 * @c: The character to check
 *
 * Return: 1 if c is a letter,lowercase or uppercase
 * return 0 otherwise
 *
 */
int _isalpha(int c)

{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c < 'Z'))
		return (1);

	else
		return (0);

}
