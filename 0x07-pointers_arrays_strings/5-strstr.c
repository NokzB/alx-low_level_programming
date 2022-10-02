#include "main.h"

/**
* _strstr - locates a substring
* @haystack: teh string to be searched into
* @needle: the string to search for
* Return: a pointer to the beginning of the located string, null if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		} while (haystack[i] == needle[i]);
			haystack++;
	}
	return ('\0');
}
