#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int _printf(const char * format, ...);
int print_c(va_list  arg);
int _strlen(char *s);
int print_s();

/**
 *
 *
 *
 **/

typedef struct pfunc
{
	char x;
	int (*f)(va_list arg);
} pfunc;


