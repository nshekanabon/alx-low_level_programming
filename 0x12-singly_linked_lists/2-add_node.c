#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds new node at the beginning of linked list
* @head: double pointer to list_t list
* @str: new string to add in node
*
* Return: the address of new element or NULL for failure
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}