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
	int j = 0;
	va_list arg;
	pfunc selector[] = {
		{'c', print_c},
		{'s', print_s},
	}
	va_start(arg, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%')
		{
			if (format [i] != '\0')
			{
				_putchar(format[i]);
				i++;
			}
			while (format[i] == '%')
			{
				if(format[i] == '%')
					i++
				j = 0;
				if (format[i] == selector[j].x)
				{
					selector[j].f(arg);
				}
				j++;
			}
		}
	}
	va_end(arg);
	return (0);
}

