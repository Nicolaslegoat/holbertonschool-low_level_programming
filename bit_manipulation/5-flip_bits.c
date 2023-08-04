#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - count the number of bits
 * @n: the number
 * @m: the number to flip n to
 * Return: the necessary number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
