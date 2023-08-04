#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a linked list
 * @head: the head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
