#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - fct to list elements
 * @h: ptr to list elements 
 * Return: the elements listed
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
