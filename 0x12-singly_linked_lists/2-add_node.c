#include "lists.h"
/**
 *add_node- adds a new node at the beginning of a list
 *@head:pointer to head/start of the list
 *@str:string parameter to be added
 *Return:NULL if function fails else address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
char *copy;
int len;
list_t *l;
l = malloc(sizeof(list_t));
if (l == NULL)
return (NULL);

copy = strdup(str);
if (copy == NULL)
{
free (l);
return (NULL);
}
for (len = 0; str[len];)
len++;
l->str = copy;
l->len = len;
l->next = *head;

*head = l;
return (l);
}
