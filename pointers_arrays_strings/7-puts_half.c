#include "main.h"
/**
 * puts_half - fonction
 * @str: var
 */
void puts_half(char *str)
{
	int i =0, j = 0, n;

	while (str[i++])
		j++;

	if ((j % 2) == 0)
		n = j / 2;

	for (i = n; i < j; i++)
		_putchar(str[i]);


	_putchar('\n');
}
