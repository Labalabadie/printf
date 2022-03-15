#include "main.h"

/**
 * print_s - checks for and prints strings
 * @arg: arguments
 * Return: string lenght
 **/

int print_s(va_list arg)
{
	char *a = va_arg(arg, char*);
	int i = 0;

	if (!a)
	{
		return (_printf("(null)"));
	}
	while (*a != '\0')
	{
		_putchar(*a);
		a++;
		i++;
	}
	return (i);
}
