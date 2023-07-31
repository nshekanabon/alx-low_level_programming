#include "lists.h"

/**
* free_listint - frees list.
* @head: pointer to first node on list
*/

void free_listint(listint_t *head)
{
listint_t *c_node = head;
listint_t *n_node;

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
}
