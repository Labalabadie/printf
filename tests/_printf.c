#include "main.h"
/**
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
		{'\0',NULL}
	};
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			continue;
		}
		else
		{
			j = 0;
			while (format[i + 1] != selector[j].x)
			{
				j++;
			}
			if (selector[j].f != NULL)
				selector[j].f(arg);
		}
		i++;
		i++;
	}
	va_end(arg);
	return (i);
}

