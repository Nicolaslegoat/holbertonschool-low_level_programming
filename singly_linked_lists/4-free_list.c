#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free a linked list
 * @head: the pointer to the first node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
