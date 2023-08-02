#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add end node
 * @head: the original linked list
 * @str: the string to add the node
 * Return: the adress of the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;

			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new;
			return (temp);
		}
	}
	return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: string to count
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}

