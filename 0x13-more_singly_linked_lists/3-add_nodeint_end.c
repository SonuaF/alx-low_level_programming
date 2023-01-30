#include "lists.h"

#include <stdio.h>

#include <stdlib.h>

/**
 * add_nodeint_end - add a node at the end
 * @head: A pointer of the first node of the list
 * @n : integer to add
 *
 * Return: pointer to the last node of the list
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)

{

	listint_t *p, *last;



	p = malloc(sizeof(listint_t));

	if (p == NULL)

		return (NULL);

	last = *head;

	p->n = n;

	p->next = NULL;

	if (*head == NULL)

	{

		*head = p;

		return (p);

	}

	while (last->next)

		last = last->next;

	last->next = p;

	return (p);

}
