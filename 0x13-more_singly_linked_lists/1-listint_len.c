#include "lists.h"
/**
 * listint_len- returns number of elements in a linked list
 * @h:pointer to the head of list
 * Return:Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;
while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
