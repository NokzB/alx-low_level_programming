#include "main.h"
/**
* rev_string - reverses a string
* @s: character for the string
*/

void rev_string(char *s)
{
	int i = 0;
	int length;
	char tmp;

	while (s[length++])
	i++;

	for (length = i - 1; length >= i / 2; length--)
	{
		tmp = s[length];
		s[length] = s[i - length - 1];
		s[i - length - 1] = tmp;
	}
}
