#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add new node
 * @head: the original linked list
 * @str: the string to add the node
 * Return: the adress of the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);

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
