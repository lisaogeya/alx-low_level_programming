#include "lists.h"
/**
 * reverse_listint- reverses a list
 * @head:pointer to the address of the head of the list
 * Return:pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *a;
listint_t *b;
if (head == NULL || *head == NULL)
return (NULL);
b = NULL;
while ((*head)->next != NULL)
{
a = (*head)->next;
(*head)->next = b;
b = *head;
*head = a;
}
(*head)->next = b;
return (*head);
}
