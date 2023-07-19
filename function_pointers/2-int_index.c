#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - fct
 * @array: the array
 * @size: the size of array
 * @cmp: poiter to compare values
 * Return: size.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	{
	if (array == NULL || cmp == NULL)
		return (-1);
	}
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
