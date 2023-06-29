#include "main.h"
#include <stdio.h>
/**
 * reverse_array - fct
 * @a: var ptr
 * @n: var
 * @i: var
 * @j: var
 */
void reverse_array(int *a, int n)
{
	int i;
	int j; 

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
