#include "main.h"
/**
 *
 */
int print_ui(unsigned int i)
{
        unsigned int j = i;
	int a = 0;		 
  	int counter = 0;

	_putchar('-');
	counter++;

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
