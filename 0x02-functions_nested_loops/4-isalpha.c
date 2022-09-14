#include "main.h"
/**
* _isalpha - checks if letter, lowercase or uppercase
* @c : letter to be checked
*
* Return: 0 or 1
*/

int _isalpha(int n)
{
	if ((n >= 'a' && n <= 'z')|| (n >= 'A' && n <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
