#include "lists.h"
size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
       
 */
size_t looped_listint_count(listint_t *head)
{
listint_t *t;
listint_t *hre;
size_t nds = 1;
if (head == NULL || head->next == NULL)
return (0);
t = head->next;
hre = (head->next)->next;
while (hre)
{
if (t == hre)
{
t = head;
while (t != hre)
{
nds++;
t = t->next;
hre = hre->next;
}
t = t->next;
while (t != hre)
{
nds++;
t = t->next;
}
return (nds);
}
t = t->next;
hre = (hre->next)->next;
}
return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of the head of the listint_t list.
 * Return: The size of the list that was freed.
 *
  */
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp;
size_t nds;
size_t i;
nds = looped_listint_count(*h);
if (nds == 0)
{
for (; h != NULL && *h != NULL; nds++)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
}
}
else
{
for (; i < nds; i++)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
}
*h = NULL;
}
h = NULL;
return (nds);
}
