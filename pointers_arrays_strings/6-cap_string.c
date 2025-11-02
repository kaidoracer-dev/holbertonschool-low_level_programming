#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
    int i = 0;
    int j;
    char sep[] = " \t\n,;.!?\"(){}";

    /* Capitalize first character if lowercase */
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - ('a' - 'A');

    /* Loop through the string */
    while (str[i] != '\0')
    {
        j = 0;
        while (sep[j] != '\0')
        {
            /* If current char is a separator and next char is lowercase */
            if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] = str[i + 1] - ('a' - 'A');
                break; /* Stop checking other separators */
            }
            j++;
        }
        i++;
    }

    return str;
}