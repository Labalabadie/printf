#include <stdarg.h>
int _putchar(char c);
int _printf(const char * format, ...);
int print_c(char c);

/**
 *
 *
 *
 **/

typedef struct pfunc
{
	char c;
	void (*f)(va_list arg);
} pfunc;


