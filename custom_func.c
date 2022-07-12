#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - give the length of a string
 * @s: the string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: a string
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar("\n");
}
