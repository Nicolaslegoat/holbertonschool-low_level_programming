#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - fct
 * @s1: the first string to concatenated
 * @s2: the second string to concatenated
 * @n: var
 * Return: the two string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len = n, i;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * (len + 1));

	if (concat_str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concat_str[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat_str[len++] = s2[i];

	concat_str[len] = '\0';

	return (concat_str);
}
