#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory to malloc
* @b: bytes to be allocated
* Return: a pointer to allocated memory, 98 to terminate
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
