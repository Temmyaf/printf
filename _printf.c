#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string countaining all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	
	conver_t list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
	}
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	count = loop_count(format, list, arg);
	va_end(arg);
	return (count);
}

/**
 * convert - convert numbers
 * @num: number to transform
 * @base: base to transform num
 * Return: number into char pointer
 */
char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	prt = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
