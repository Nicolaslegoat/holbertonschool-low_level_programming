#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - set the value of a bit
 * @n: a pointer to the bit
 * @index: the index to set the value
 * Return: the bit clear
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
