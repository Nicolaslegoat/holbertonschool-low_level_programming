#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - fct to locate node
 * @head: the head of the list
 * @index: the node to locate
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
