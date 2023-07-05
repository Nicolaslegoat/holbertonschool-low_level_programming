#include "main.h"
/**
 * _memset - fct
 * @s: var
 * @b: var
 * @n: var
 * Return: memory here
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{	s[i] = b;
	}
	return (s);
}
