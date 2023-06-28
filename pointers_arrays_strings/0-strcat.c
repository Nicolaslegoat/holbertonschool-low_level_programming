#include "main.h"
/**
 * _strcat - fonction
 * @dest: var
 * @src: var
 * Return: dest here
 */
char *_strcat(char *dest, char *src)
{
	int i = 0; int j = 0;

	while (dest[i++])
		j++;

	while (src[i++])
	{
		dest[j++] = src[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);

	_putchar('\n');

}
