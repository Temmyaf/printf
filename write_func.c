#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: THe character to print
 * Return: On success 1
 * on error, -1 is returned, and errno is set appropriately.
 * Desription: _putchar uses a local buffer of 10247 to call write
 * as little as possible
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

