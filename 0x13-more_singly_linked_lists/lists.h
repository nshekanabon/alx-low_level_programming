#ifndef LIST_H
#define LIST_H

/* headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* structures */
/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the the next node
*
* Description: singly linked list node structure
*
*/
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/* function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int sum_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *add_nodeint(listint_t **head, const int n);
int pop_listint(listint_t **head);
int _putchar(char c);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif