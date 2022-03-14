#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: arguments passed
 * Return: length of output string
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list arg;
	pfunc selector[] = {
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};
	va_start(arg, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

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

