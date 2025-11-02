#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate src to the end of dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{ 
		i++;
	}
		while (src[i] != '\0')
		{   
			dest[i] = src[j];

			i++;
			
			j++;

		 
		 }

	dest[i] = '\0';

	return (dest);
}