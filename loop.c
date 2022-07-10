#include "main.h"
/**
 *loop_count - loop count
 *@format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int loop_count(char *format, conver_t list[], va_list arg)
{
	int i, j, r_val;
	int printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; list[j].sym != NULL; j++)
			{
				if (format[i + 1] == list[j].sym[0])
				{
					r_val = list[j].f(arg);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_write_char(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
