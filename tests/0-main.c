#include "main.h"
#include <stdio.h>
int main()
{
	char initialsurename = 'M';
	char initialname = 'P';
	char *name = "Pepito";
	_printf("My name is %s, and my initials are %c%c\n", name, initialname, initialsurename);
	printf("My name is %s, and my initials are %c%c\n", name, initialname, initialsurename);
/*	printf("%d",_printf("hola"));*//*testing return of _printf, counts character printed*/
	return(0);
}
