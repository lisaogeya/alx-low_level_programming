#include "lists.h"
/**
 * pop_listint - deletes head node of a list
 * @head:pointer to address of head of the list
 * Return:0 if linked list is empty else n
 */
int pop_listint(listint_t **head)
{
listint_t *t;
if (*head == NULL)
{
return (0);
}
t = *head;
int rtn;
rtn = (*head)->n;
*head = (*head)->next;

free(t);
return (rtn);
}
