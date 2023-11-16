#include "lists.h"
/**
 * add_node_end- adds new node at the end of a list
 * @head:pointer to first node of the list
 * @str:string parameter aded to list
 * Return:NULL if function fails else new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *copy;
int len;
list_t *l, *end;

l = malloc(sizeof(list_t));
if (l == NULL)
return (NULL);
copy = strdup(str);
if (str == NULL)
{
free(l);
return (NULL);
}
for (len = 0; str[len];)
len++;
l->str = copy;
l->len = len;
l->next = NULL;

if (*head == NULL)
*head = l;
else
{
end = *head;
while (end->next != NULL)
{
end = end->next;
}
end->next = l;
}
return (*head);
}

