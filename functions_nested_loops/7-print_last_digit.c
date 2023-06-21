#include "main.h"

/**
* print_last_digit - Description pour main
* @n: Fonction
* Return: Always 0 (succes)
 */
int print_last_digit(int n)
{	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
		return (ld);
}
