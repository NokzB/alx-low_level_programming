#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
/**
* _putchar - writes the characher c to stdout
* @c: The character to print
* 
* Return: On success 1.
* On error, -1 is returned, and errno is set appro
priately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif /* _MAIN_H_ */
