#include "lists.h"
/**
 * get_nodeint_at_index-locates given node of the list
 * @head:pointer to the head of the list
 * @index:index of the node to locate
 * Return:NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;

for (; node < index; node++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}

