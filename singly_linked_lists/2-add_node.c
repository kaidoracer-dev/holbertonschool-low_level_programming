#include <stdlib.h>
#include "lists.h"
#include <string.h>



list_t *add_node(list_t **head, const char *str)
{
    list_t *copy = malloc(sizeof(list_t));

    if (copy == NULL)
    {
        return NULL;
    }
        copy->str = strdup(str);
        
        if (copy->str == NULL)
        {
            return NULL;
        }
        copy->len = strlen(str);
        copy->next = *head;
        *head = copy;

    return (copy);

}