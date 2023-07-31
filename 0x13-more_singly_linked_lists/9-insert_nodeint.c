#include "lists.h"

/**
* insert_nodeint_at_index - it inserts new node at given position
* @head: the pointer to first node in a list.
* @idx: index of the list where new node will be added.
* @n: the data to be added.
*
* Return: the pointer to list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p, *c;
unsigned int i;

if (head == NULL)
return (NULL);

c = malloc(sizeof(listint_t));
if (c == NULL)
return (NULL);

c->n = n;
p = *head;

if (idx == 0)
{
c->next = p;
*head = c;
return (c);
}

for (i = 0; i < idx - 1; i++)
{
if (p == NULL)
return (NULL);
p = p->next;
}

c->next = p->next;
p->next = c;

return (c);
}
