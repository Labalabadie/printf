#include "main.h"
#include <stdio.h>
#include <limits.h>
int main()
{
	printf("Sus amigos le dicen %sy sus iniciales son %c %c\n", "Marita", 'R', 'H');
	_printf("Sus amigos le dicen %sy sus iniciales son %c %c\n", "Marita", 'R', 'H');
	printf("%d\n%d\n%d\n%d\n%i\n", INT_MAX, INT_MIN, 0, 12, -34);
	_printf("%d\n%d\n%d\n%d\n%i\n", INT_MAX, INT_MIN, 0, 12, -34);
	printf("Binary:\n24: %b\nINT_MIN: %b\nINT_MAX: %b\nZero: %b\n", 24, INT_MIN, INT_MAX,0);
	_printf("Binary:\n24: %b\nINT_MIN: %b\nINT_MAX: %b\nZero: %b\n", 24, INT_MIN, INT_MAX,0);
	_printf("%r","Reverse");
	return(0);
}
