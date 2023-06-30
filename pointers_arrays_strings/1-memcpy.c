#include "main.h"
/**
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	while (src[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
