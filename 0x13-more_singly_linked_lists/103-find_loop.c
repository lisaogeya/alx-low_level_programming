#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in a list
 * @head: A pointer to the head of the listint_t list.
 * Return:NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *t;
listint_t *hre;
if (head == NULL || head->next == NULL)
return (NULL);
t = head->next;
hre = (head->next)->next;
while (hre)
{
if (t == hre)
{
t = head;
while (t != hre)
{
t = t->next;
hre = hre->next;
}
return (t);
}
t = t->next;
hre = (hre->next)->next;
}
return (NULL);
}
