#include "function_pointers.h"
/**
 * print_name - fonction qui ecrit le nom
 * @name: le nom a ecrire
 * @f: poiteur de function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *s))
{
	if (name != NULL && f != NULL)
	f(name);
}
