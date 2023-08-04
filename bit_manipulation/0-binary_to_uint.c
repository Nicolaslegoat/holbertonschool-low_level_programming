#include "main.h"
/**
 * binary_to_uint - convert a binary number
 * @b: a pointer to a string
 * Return: the number converted
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, multi = 1;
	int length;

	if (*b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		num += (b[length] - '0') * multi;
		multi *= 2;
	}

	return (num);
}
