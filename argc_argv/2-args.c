#include <stdio.h>
/**
 * main - fct
 * @argc: var
 * @argv: var
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
