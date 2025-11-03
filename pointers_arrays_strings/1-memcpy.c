#include "main.h"
#include <stdio.h>
/**
* _memcpy - Copie memory area
* @dest: to memory area dest
* @src: from memory area
* @n: numbers of bytes
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
