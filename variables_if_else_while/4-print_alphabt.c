#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Description pour main
 * Return: Always 0 (succes)
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{

		if (a != 113 && a != 101)
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);
}
