#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an long int: %d byte(s)", sizeof(long int));
	printf("Size of an long long int: %d byte(s)", sizeof(long long int));
	printf("Size of an float: %d byte(s)", sizeof(float));

	return (0);
}
