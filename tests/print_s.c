#include "main.h"
int print_s(va_list arg)
{
	char *a = va_arg(arg, char*);
	int i = 0;

	while (*a != '\0')
	{
	_putchar(*a);
	a++;
	i++;	
	}
	return(i);
}
