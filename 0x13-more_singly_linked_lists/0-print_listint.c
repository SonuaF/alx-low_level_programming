#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print nodes and return nbr of nodes
 * @h: first node of the list
 *
 * Return: number of nodes.
 **/

size_t print_listint(const listint_t *h)
{
size_t nodenum = 0;
while (h)
{
printf("%d\n", h->n);
nodenum++;
h = h->next;
}
return (nodenum);
}
