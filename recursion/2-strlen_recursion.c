#include "main.h"
/**
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(++s);
	}
	return(i);
}
