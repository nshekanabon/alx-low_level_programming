#include "lists.h"

/**
* print_listint - prints elements of a list
* @h: pointer to head of a list.
*
* Return: n which is number of elements in a list
*/

size_t print_listint(const listint_t *h)
{
int n = 0;

while (h)
{
printf("%d\n", h->n);
n++;
h = h->next;
}

return (n);
}
