#include "lists.h"
/**
 *insert_nodeint_at_index - inserts new node to a list
 *@head:pointer to the address of the head of the list
 *@idx:index of the list where new node is added
 *@n:integer for new node
 *Return:NULL if function fails else address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *node_copy = *head;
unsigned int node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = node_copy;
*head = node_copy;
return (node_copy);
}
for (; node < (idx - 1); node++)
{
if (node_copy == NULL || node_copy->next == NULL)
{
return (NULL);
}
node_copy = node_copy->next;
}
new_node->next = node_copy->next;
node_copy->next = new_node;

return (new_node);
}


