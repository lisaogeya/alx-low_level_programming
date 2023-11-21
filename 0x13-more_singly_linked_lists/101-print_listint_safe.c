#include "lists.h"
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len-counts number of unique nodes in a looped linked list
 * @head:pointer to head of list
 * Return:0 if list not found
 */
size_t looped_listint_len(const listint_t *head)
{
size_t nds = 1;
const listint_t *t;
const listint_t *h;
if (head == NULL || head->next == NULL)
return (0);
t = head->next;
h = (head->next)->next;
while (h)
{
if (t == h)
{
t = head;
while (t != h)
{
nds++;
t = t->next;
h = h->next;
}
t = t->next;
while (t != h)
{
nds++;
t = t->next;
}
return (nds);
}
t = t->next;
h = (h->next)->next;
}
return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nds;
size_t i = 0;
nds = looped_listint_len(head);

if (nds == 0)
{
for (; head != NULL; nds++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (i = 0; i < nds; i++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nds);
}
