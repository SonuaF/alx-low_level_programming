#include "lists.h"

#include <stdlib.h>

/**
 * free_listint - Free linked list
 * @head: The first element
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
