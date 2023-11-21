#include "lists.h"
#include <string.h>
/**
 * pop_listint - deletes head node of a list
 * @head:pointer to address of head of the list
 * Return:0 if linked list is empty else n
 */
int pop_listint(listint_t **head)
{
int rtn;
listint_t *t;
if (*head == NULL)
{
return (0);
}
t = *head;
rtn = (*head)->n;
*head = (*head)->next;

free(t);
return (rtn);
}
