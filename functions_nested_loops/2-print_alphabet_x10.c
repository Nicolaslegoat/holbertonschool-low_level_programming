#include "main.h"

/**
 * print_alphabet_x10 - alphabet x10
 * Return: Always 0 (succes)
*/

void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	_putchar(letter);
	_putchar(letter);
	_putchar(letter);
	_putchar(letter);
	_putchar(letter);
	_putchar(letter);
	_putchar(letter);
	_putchar(letter);
	_putchar(letter);
	}
}
