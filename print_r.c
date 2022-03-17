#include "main.h"

/**
 * print_r - Prints strings in reverse.
 * @arg: arguments
 * Return: string lenght
 **/

int print_r(va_list arg)
{
	char *a = va_arg(arg, char*);
	int i = 0;
	int counter = 0;
	char *b;

	if (!a)
	{
		return (_printf("(null)"));
	}
	b = a;
	while (*a != '\0')
	{
		a++;
		i++;
	}
	while (i >= 0)
	{
		if (b[i] == '%' && b[i -1] == '%' || b[i] == '%' && b[i - 1] == 'r')
			i--;
		_putchar(b[i]);
		i--;
		counter++;
	}
	return (counter);
}
