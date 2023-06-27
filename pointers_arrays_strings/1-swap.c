#include "main.h"
/**
 * swap_int - fonction
 * @a: the firt var
 * @b: the second var
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
