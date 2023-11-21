#include "lists.h"
/**
 * free_listint - freesa a list
 * @head:pointer to the head of list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *t;
while (head != NULL)
{
t = head->next;
free(head);
head = t;
}
}
