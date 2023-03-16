#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and run on
 *
 * Return: 0 if successful
 */
int main(void)
{
    // Use the sizeof operator to get the size of each type in bytes
    // Use printf to print the size and format it according to the type
    printf("Size of a char: %d byte(s)\n", sizeof(char));
    printf("Size of an int: %d byte(s)\n", sizeof(int));
    printf("Size of a long int: %d byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
    printf("Size of a float: %d byte(s)\n", sizeof(float));

    // Return 0 to indicate success
    return (0);
}
