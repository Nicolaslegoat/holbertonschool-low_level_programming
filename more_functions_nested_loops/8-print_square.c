#include "main.h"
/**
 * print_square - fonction square.
 * @size: taille
 * @i: l
 * @j: L
 * Return: Always 0.
 */

void print_square(int size)
{
	int i, j;
	if (size > 0)
	{
		_putchar('\n');
		return;
	}
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i == size -1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}
