#include "main.h"
#include <stdio.h>
/**
 * string_toupper - fct
 * @str: var ptr
 * Return: str return
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')

	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
