#include "lists.h"

/**
* get_nodeint_at_index - get nth node of linked list
* @head: pointer to the node 0
* @index: nth node to be got
*
* Return: return nth node pointer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *p = head, *c;
unsigned int i;

if (head == NULL)
return (NULL);

for (i = 0; i < index; i++)
{
if (p->next == NULL)
return (NULL);
c = p->next;
p = c;
}
return (p);
}
