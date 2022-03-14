#include "main.h"

/**
 * print_c - checks for and prints characters
 * @arg: arguments to check
 * Return: chars checked
 **/

int print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
