#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - fct
 * @array: The array
 * @size: the size of array
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
