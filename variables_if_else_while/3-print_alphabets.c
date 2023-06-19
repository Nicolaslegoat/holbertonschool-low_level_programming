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
	int b;

	for (a = 97; a <= 122; a++)
		for (b = 65; b <= 90; b++)
		{
			putchar(a);
		}
	{
		putchar(b);
	}
	{
		putchar('\n');
	}
	return (0);
