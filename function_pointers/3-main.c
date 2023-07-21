#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the result
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *oprt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	oprt = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(oprt) == NULL || oprt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oprt == '/' && num2 == 0) || (*oprt == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oprt)(num1, num2));
	return (0);
}
