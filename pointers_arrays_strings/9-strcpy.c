#include "main.h"
/**
 * _strcpy - fonction
 * @dest: var
 * @src: var
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		*dest = *src;
		i++;
	}
	return (dest);
}
