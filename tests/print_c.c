#include "main.h"
#include <stdio.h>
/**
 * print_c - checks for and prints characters
 * @arg: arguments to check
 * Return: chars checked
 **/

int print_c(va_list arg)
{
	char c;

	printf("entre al printchar\n");
	c = va_arg(arg, int);
 	printf("*");
	_putchar(c);
	printf("*\n");
	return (1);
}
