#include "main.h"

/**
 * print_rev - fonction
 * @s: var
 */

void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
