#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fct to duplicate a string
 * @str: the string to duplicate
 * Return: the string duplicate
 *
 */
char *_strdup(char *str)
{
	int a = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
