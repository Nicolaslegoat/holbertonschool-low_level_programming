#include "main.h"
/**
 * cap_string - fct
 * @str: var
 * Return: str return
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == 0)
			str[i] -= 32;
		i++;

	}
	return (str);
}
