#include "main.h"

/**
 * _printf - produces output to stdout  accoridng to a format
 * @format: a character string composed of zero or more directives
 * Returns: number of characters printed in bytes
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count;
	int printed = 0;
	char print_index;
	char *string;
	va_start(args, format);
	if (!format)
	{
		return (-1);
	}
	for (count = 0; format[count] != '\0'; count++)
	{
		if (format[count] != '%')
		{
			print_index = format[count];
			_putchar(print_index);
			printed++;
		}
		else if (format[count] == '%')
		{
			count++;
			print_index = format[count];
			switch (print_index)
			{
			case 'c':
				print_index = va_arg(args, int);
				_convertc(print_index);
				break;
			case 's':
				string = va_arg(args, char *);
				printed += _conversion_s(string);
				break;
			case '%':
				printed += _conversion_conversion(print_index);
				break;
			default:
				count--;
				print_index = format[count];
				_putchar(print_index);
				count++;
				printed += 2;
				break;
			}
		}
	}
	return (printed);
}
