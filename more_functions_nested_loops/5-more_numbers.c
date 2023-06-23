#include "main.h"
/**
 * more_numbers - Prints the numbers from 0-9.
 */
void more_numbers(void)
{
	int line = 0;
	int num;

	while (line++ <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)

			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

