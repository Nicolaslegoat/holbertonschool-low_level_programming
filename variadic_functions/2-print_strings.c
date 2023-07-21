#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - fct
 * @separator: pointeur
 * @n: cst
 * Return: the string print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *letter;

	if (n > 0)
	{

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			letter = va_arg(args, char *);

			if (letter == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", letter);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n)");
}
