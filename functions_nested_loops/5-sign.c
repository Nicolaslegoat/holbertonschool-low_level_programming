#include "main.h"
#include <stdio.h>
/**
 * print_sign - Description fonction
 * @n: The character to be checked.
 * Return: Always 0 (succes)
 */

int print_sign(int n)
{
        if (n > 0){
                printf("'+'\n", n);
        }
        {       return (1);
        }
        if (n == 0){
                printf("'0'\n", n);
        }
        {       return (0);
        }
        else (n < 0){
                printf("'-'\n", n)
        }
        {
                return (0);}
}
