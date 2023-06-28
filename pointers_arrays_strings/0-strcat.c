#include "main.h"
/**
 * _strcat - fonction
 * @dest: var
 * @src: var
 * Return: dest here
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
       	int j = 0;

	while (dest[i++] != '\0')
		j++;

	for (i = 0; src[i]; i++)

		dest[j++] = src[i];

	return (dest);
}
