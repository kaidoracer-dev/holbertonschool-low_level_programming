#include "main.h"
#include <stdio.h>
/**
* _atoi - convert a string to an integer
* @s: the string to convert
*
* Return: the integer value
*/
int _atoi(char *s)
{
	int i = 0;
	int n = 1;
	int t = 0;
	int f = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			n = n * -1;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			f = 1;
			t =(t * 10) + (s[i] - '0');
		} 
		else if (f == 1)
		
		break;
		
		i++;
	}

	return (t * n);
}
