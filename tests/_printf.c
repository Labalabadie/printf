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
	va_list arg;

	va_start(argu, format)

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
	}
	return (0);
	va_end(arg);
}

