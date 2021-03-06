#ifndef LABA_AMORCITO
#define LABA_AMORCITO

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list  arg);
int _strlen(char *s);
int print_s(va_list arg);
int print_i(va_list arg);
int _pow(int a, int b);
int print_ui(unsigned int i);
int print_b(va_list arg);
int print_r(va_list arg);

/**
 * struct pfunc - model for structs
 * @x: character to compare
 * @f: function to do in case of match
 **/

typedef struct pfunc
{
	char x;
	int (*f)(va_list arg);
} pfunc;

#endif
