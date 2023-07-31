#include "lists.h"

/**
* listint_len - prints number of elements of a list
* @h: pointer to head of a list.
*
* Return: n which is number of elements in a list
*/

size_t listint_len(const listint_t *h)
{
int n = 0;

while (h)
{
n++;
h = h->next;
}

return (n);
}
