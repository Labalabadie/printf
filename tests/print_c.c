#include "main.h"
int print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return(1);
}
