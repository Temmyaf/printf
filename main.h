#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <stdarg.h>

int _putchar(char  c);
void _puts(char *str);
int _write_char(char c);
int _printf(char *format, ...);
char* convert(unsigned int num, int base);

#endif
