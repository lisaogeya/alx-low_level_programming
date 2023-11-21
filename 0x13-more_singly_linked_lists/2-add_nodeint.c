#include "lists.h"
/**
 * add_nodeint- adds new node at the beginning of list
 * @head:pointer to address of head of the list
 * @n:integer for new node
 * Return:NULL if function fails else address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *l;
l = malloc(sizeof(listint_t));
if (l == NULL)
return (NULL);

l->n = n;
l->next = *head;
*head = l;

return (l);
}
