#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char  c);
void _puts(char *str);
int _strlen(char *str);
int _write_char(char c);
int _printf(char *format, ...);
char *convert(unsigned int num, int base);
int loop_count(char *format, conver_t list[], va_list arg);
int print_num(va_list args);
int print_unsigned_num(unsigned int n)

/**
* struct convert - defines a structure for symbols and functions
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

#endif
