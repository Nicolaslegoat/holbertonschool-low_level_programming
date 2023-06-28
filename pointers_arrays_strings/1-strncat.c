#include "main.h"
/**
* _strncat - fonction
* @dest: var
* @src: var
* @n: var
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++] != '0')
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j] = src[i];

	return (dest);
}
