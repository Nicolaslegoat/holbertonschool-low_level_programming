#include "main.h"
#include <stdio.h>
/**
 * print_sign - Description fonction
 * @n: The character to be checked.
 * Return: Always 0 (succes)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	return (0);
}
