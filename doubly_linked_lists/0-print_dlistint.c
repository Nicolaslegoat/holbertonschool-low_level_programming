#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - fct to print linked
 * @h: prt to print
 * Return: print
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
