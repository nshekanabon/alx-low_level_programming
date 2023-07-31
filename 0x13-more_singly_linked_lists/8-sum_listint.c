#include "lists.h"

/**
* sum_listint - sums all data(n) of linked list.
* @head: pointer to first node of a list.
*
* Return: 0 if list is empty and the sum of elements in list otherwise
*/

int sum_listint(listint_t *head)
{
listint_t *p;
unsigned int sum = 0;

if (head == NULL)
return (0);

p = head;
while (p)
{
sum = sum + p->n;
p = p->next;
}

return (sum);
}
