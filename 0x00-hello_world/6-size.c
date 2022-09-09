#include <stdio.h>
/**
* main - Entry point
*
* Description: Program to return size of variable
*
* Return: always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %lu\n bytes\n", sizeof(char));
	printf("Size of a int: %lu\n bytes\n", sizeof(int));
	printf("Size of a long: %lu\n bytes\n", sizeof(long));
	printf("Size of a long long: %lu\n bytes\n", sizeof(long long));
	printf("Size of a float: %lu\n bytes\n", sizeof(float));
	return (0);
}
