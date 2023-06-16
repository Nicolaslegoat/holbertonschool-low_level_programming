#include <stdio.h>
#include <stdlib.h>

/**
*  main - Description pour main
*  Return: Always 0 (succes)
*/

int main(void) {
	printf("Size of char: 64 byte(s)\n", sizeof(char));
    printf("Size of short: 64 byte(s)\n", sizeof(short));
    printf("Size of int: 64 byte(s)\n", sizeof(int));
    printf("Size of long: 64 byte(s)\n", sizeof(long));
    printf("Size of long long: 64 byte(s)\n", sizeof(long long));
    printf("Size of float: 64 byte(s)\n", sizeof(float));
    printf("Size of double: 64 byte(s)\n", sizeof(double));
    printf("Size of long double: 64 byte(s)\n", sizeof(long double));
	return (0);
}
