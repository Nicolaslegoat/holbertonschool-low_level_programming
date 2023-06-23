#include "main.h"
/**
 * print_diagonal - fonction diagonal.
 * @n: number
 */
void print_diagonal(int n)
{
	int dia;

	if (n > 0)
	{
		for (dia = 0; dia < n; dia++)
			_putchar('\');
	}
	_putchar('\n');
}
