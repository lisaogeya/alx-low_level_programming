#include "lists.h"
/**
 * delete_nodeint_at_index-deletes node at given index of a list
 * @head:pointer to address of head of list
 * @index:index of the node to be deleted
 * Return:1 on success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int node;
listint_t *t;
listint_t *node_copy = *head;

if (node_copy == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(node_copy);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (node_copy->next == NULL)
return (-1);
node_copy = node_copy->next;
}

t = node_copy->next;
node_copy->next = t->next;
free(t);
return (1);
}
