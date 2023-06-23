#include "main.h"
/**
 * print_diagonal - fonction diagonal.
 * @n: number
 */
void print_diagonal(int n)
{
	int dia, espace;

	if (n > 0)
	{
		for (dia = 0; dia < n; dia++)
		{
			for (espace = 0; espace < dia; espace++)
				_putchar(' ');
			_putchar('\\');

			if (dia == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
