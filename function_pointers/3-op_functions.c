#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition
 * @a: the first number
 * @b: the second number
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - soustraction
 * @a: the first number
 * @b: the second number
 * Return: soustraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: the first number
 * @b: the second number
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: the first number
 * @b: the second number
 * Return: divison
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo
 * @a: first number
 * @b: second number
 * Return: modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
