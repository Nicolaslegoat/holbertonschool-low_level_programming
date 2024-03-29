#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - fct to print the lement of list
 * @h: the list_t list
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}

	return (node);
}
