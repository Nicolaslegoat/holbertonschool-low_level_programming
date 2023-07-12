#include "main.h"
#include <stdlib.h>
/**
 * str_concat - fct
 * @s1: the first string to concatenated
 * @s2: the second string to concatenated
 * @n: var
 * Return: the two string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	int i;
	int concat_i = 0;
	unsigned int len = n;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
