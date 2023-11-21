#include "lists.h"
/**
 * sum_listint-callculates sum of all the data of a list
 * @head:pointer to the head of the list
 * Return:0 if list is empty else sum of all data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
