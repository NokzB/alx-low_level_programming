#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int a = 0, b = 0, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(list, format);

	while (format && format[a])
	{
		while (t_arg[b])
		{
			if (format[a] == t_arg[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(list, int)), c - 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), c - 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), c - 1;
			break;
		case 's':
			str = va_arg(list, char *), c - 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} a++;
	}
	printf("\n"), va_end(list);
}
