#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 *
 **/


int _printf(const char *format, ...)
{
	int i = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
	}
	return (0);
}
