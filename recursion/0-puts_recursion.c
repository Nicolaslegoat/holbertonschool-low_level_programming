#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - fct
 * @s: var
 */
void _puts_recursion(char *s)
{
	if (*s)
	{	_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');


}
