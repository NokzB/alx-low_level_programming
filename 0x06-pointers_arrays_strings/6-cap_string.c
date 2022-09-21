#include "main.h"
/**
* cap_string - capitalises the first letter of every word in a string
* @str: the string to be capitalized
* Return: capitalized string
*/

char *cap_string(char *str)
{
	char sep[] = ",\t;\n; .!?\"(){}";
	int h, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		h = 0;
	}
	if (i == 0)
	{
		h = 1;
	}
	else
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j])
			{
				h = 1;
				break;
			}
		}
	}
	if (h == 1)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = ('a' - 'A');
		}
	}
	return (str);
}
