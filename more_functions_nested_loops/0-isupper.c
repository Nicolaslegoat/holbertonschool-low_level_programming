#include "main.h"

/**
* _isupper - prototype fonction
* @c: variable
* Return: 1 if character is uppercase, 0 othrerwise.
*/


int _isupper(int c)
{
	if (c >= 65 && c <= 90)

		return (1);

	else
		return (0);
}
