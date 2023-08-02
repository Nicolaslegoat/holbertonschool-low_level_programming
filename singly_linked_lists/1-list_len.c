#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - fct to count element
 * @h: a linked list
 * Return: the number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}

