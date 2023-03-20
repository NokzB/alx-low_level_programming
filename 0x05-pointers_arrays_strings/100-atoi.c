#include "main.h"
#include <stdio.h>
/**
 *_atoi - converts a string to an integer.
 *@s: pointer to the string to be converted.
 *Return: integer received
 */
int _atoi(char *s)
{
	int index1, index2;
	unsigned int res;
	int sign = 1;
	char now;

	index1 = 0;
	res = 0;
	while (*(s + index1) != '\0')
	{
		now = *(s + index1);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			index2 = index1;
			while (*(s + index2) > 47 && *(s + index2) < 58)
			{
				res = (res * 10) + *(s + index2) - '0';
				index2++;
			}
			break;
		}
		index1++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}
