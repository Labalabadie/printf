#include "main.h"
/**
 *
 *
 */
int print_i(va_list arg)
{
	int i = va_arg(arg, int);
	int j = i;
	int a = 0;
	int counter = 0;

	if (i < 0)
	{
		return(print_ui(i));
	}
	while (i > 0)
	{
		i /= 10;
		a++;
	}
	a--;
	while (a > 0)
	{
		i = j;
		j %= _pow(10, a);
		i /= _pow(10, a);
		a--;
		_putchar(i + '0');
		counter++;
	}
	_putchar(j + '0');
	counter++;
	return(counter);
}
