#include "main.h"
/**
* swap_int - Swaps the value of two integers
* @a: pointer to the int to update
* @b: 
*/
void swap_int(int *a, int *b)
{
	int save;
	
	save = *a;
	
	*a = *b;
	*b = save;
}