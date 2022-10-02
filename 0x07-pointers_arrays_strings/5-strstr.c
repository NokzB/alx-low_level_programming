#include "main.h"

/**
* _strstr - locates a substring
* @haystack: teh string to be searched into
* @needle: the string to search for
* Return: a pointer to the beginning of the located string, null if not found
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return ('\0');
}
