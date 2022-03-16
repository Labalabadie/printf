#include "main.h"
#include <stdlib.h>

/**
 *print_b - prints decimal in binary.
 *@i: number in decimal.
 *Return: Amount of characters printed.
 */

int print_b(va_list arg)
{
	int n = va_arg(arg, int);
	unsigned int i;
	unsigned int j;
	char *a;
	unsigned int m = n;
	int counter = 0;

	if (n == 0)
		return(_putchar('0'));
	for (i = 0; n > 0; i++)
	{
		n /=  2;
	}
	a = malloc(sizeof(int)*i);
	j = i;
	
	for (; i > 0; i--)
	{
		a[i] = m % 2;
		m /= 2;
	}
	while (i < j)
	{
		i++;
	_putchar(a[i] + '0');
		counter++;
	}
	return(counter);

}
