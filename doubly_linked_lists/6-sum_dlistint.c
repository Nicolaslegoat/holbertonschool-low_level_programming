#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - sum the data of list
 * @head: the head of list
 * Return: the sum of data
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
