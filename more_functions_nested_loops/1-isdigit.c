#include "main.h"

/**
* _isdigit - prototype fonction
* @c: variable
* Return: 1 if character is digit, 0 othrerwise.
*/


int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
