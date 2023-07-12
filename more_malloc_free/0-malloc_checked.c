#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - fct
* @b: var
* Return: nada
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)

		exit(98);

	return (p);
}
