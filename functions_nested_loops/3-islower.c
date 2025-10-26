#include "main.h"
#include <stdio.h>
/**
 * _islower - checks if a character is a lowercase letter
 * @c: the character to check
 *
 * return: 1 if c is lowercase, 0 otherwise
 *
 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);

}
