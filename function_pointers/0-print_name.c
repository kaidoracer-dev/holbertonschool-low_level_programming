#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - calls a function to print a name
 * @name: name to print
 * @f: pointer to the function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
