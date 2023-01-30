#include "lists.h"

#include <stdlib.h>

/**
 * free_listint2 - Free all the elements of a linked list
 * @head: A pointer to first node of list
 **/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
