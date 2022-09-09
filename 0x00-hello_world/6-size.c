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
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long));
	printf("%lu\n", sizeof(long long));
	printf("%lu\n", sizeof(float));
	return (0);
}
