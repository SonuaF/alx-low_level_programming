#include "lists.h"

/**
 * free_list - Free linked list
 * @head: The first element
 *
 **/

void free_list(list_t *head)

{

		list_t *current;



			while ((current = head) != NULL)

					{

								head = head->next;

										free(current->str);

												free(current);

													}

}
