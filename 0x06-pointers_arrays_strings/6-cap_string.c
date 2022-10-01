#include "main.h"

/**
* cap_string - capitalises the first letter of every word in a string
* @str: the string to be capitalized
* Return: capitalized string
*/

char *cap_string(char *str)
{
	int i, x;
	int cap = 32;
	char sep[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};


	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - cap;
		}

		cap = 0;
		{
			for (x = 0; x <= 12; x++)
			{
				if (str[i] == sep[x])
				{
					x = 12;
					cap = 32;
				}
			}
		}
	}
	return (str);
}
