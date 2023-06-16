#include <stdio.h>
#include <stdlib.h>

/**
* main - A c file to display the sizes of built in data types in c
* Return - 0 signifying program success
*/

int main(void) {
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0);
}

