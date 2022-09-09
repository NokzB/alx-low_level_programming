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
	printf("Size of a char: %lu\n byte(s)", sizeof(char));
	printf("Size of a int: %lu\n byte(s)", sizeof(int));
	printf("Size of a long: %lu\n byte(s)", sizeof(long));
	printf("Size of a long long: %lu\n byte(s)", sizeof(long long));
	printf("Size of a float: %lu\n byte(s)", sizeof(float));
	return (0);
}
