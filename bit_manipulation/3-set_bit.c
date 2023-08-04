#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - set the value of a bit
 * @n: the number to modify
 * @index: the index in the number to modify
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
