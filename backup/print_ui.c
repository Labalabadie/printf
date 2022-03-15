#include "main.h"
/**
 *print_ui - Manages negative numbers in _printf.
 *@i: Unsigned i handles bordercase INT_MIN and any value above until - 1.
 *Return: Amount of characters printed.
 */
int print_ui(unsigned int i)
{
	unsigned int j;
	int a = 0;
	int counter = 0;

	_putchar('-');
	counter++;
	i = -i;
	j = i;

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
	return (counter);
}
