#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fct
 * @str: pointeur
 * Rreturn: fct
 *
 */
char *_strdup(char *str)
{
	char *s;

	if (*str == 0)
		return (NULL);

	s = malloc(2 * sizeof(char));

	if (s == NULL)
		return (NULL);

	free(s);
}
