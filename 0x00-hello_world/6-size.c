#include <stdio.h>
/**
 * main - entry point
 * Return: zero means success
 * Description: print size of datatypes
 */
int main(void)
{
	printf("Size of a char: %Id byte(s)\n", sizeof(char));
	printf("Size of an int: %Id byte(s)\n", sizeof(int));
	printf("Size of a long int: %Id bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %Id bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %Id bytes(s)", sizeof(float));
return (0);
}
