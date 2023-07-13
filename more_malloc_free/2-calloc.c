#include "main.h"
#include <stdlib.h>
/**
 * _calloc - fct
 * @nmemb: the number of elements
 * @size: the bytes size of each array elements
 * Return: If nmemb = 0, size = 0, or the function fails.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	s = mem;

	for (i = 0; i < (size * nmemb); i++)
		s[i] = '\0';

	return (mem);
}
