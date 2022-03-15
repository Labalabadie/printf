#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: arguments passed
 * Return: length of output string
 **/
int _printf(const char *format, ...)
{
	int i = 0, j = 0, counter = 0;
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
			counter++;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '\0')
				return(-1);
			j = 0;
			while (selector[j].x != '\0') 
			{		
				if (format[i + 1] == selector[j].x)
				{
				counter += selector[j].f(arg);
				}
				j++;
			}
			if (selector[j].x == '\0')
			{
				_putchar('%');
				_putchar(format[i + 1]);
				i++;
				counter = counter + 2; 
				
			}	
			i++;
		}
	}
	va_end(arg);
	return (counter);
}
