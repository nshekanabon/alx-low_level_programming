#include "lists.h"

/**
* free_listint2 - frees list.
* @head: pointer to the first node on list
*/

void free_listint2(listint_t **head)
{
listint_t *c_node;
listint_t *n_node;

if (head == NULL)
return;

c_node = *head;

/** check if the last node **/
while (c_node != NULL)
{
/** copy address of the next node to pointer **/
n_node = c_node->next;

/** free the current node **/
free(c_node);

/** make next node pointer the current node **/
c_node = n_node;
}

*head = NULL;
}
