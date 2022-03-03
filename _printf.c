#include "main.h"

/**
 * _printf - produces output to stdout  accoridng to a format
 * @format: a character string composed of zero or more directives
 * Return: number of characters printed in bytes
 */


int _printf(const char *format, ...)
{
	va_list args;

	unsigned int count;
	unsigned int printed;
	char print_index;
	char *string;
	unsigned int decimal;
	unsigned int digit;
	unsigned int string_count;

	va start(args, format);

	for (count = 0; format[count != '\0'; count++)
		{
			if (format[count] != '%')
			{
				print_index = format[count];
				_putchar(print_index);
			}
			else if (format[count] == '%')
			{
				count++;
				print_index = format[count];
				switch (print_index)
				{
				case 'c':
					print_index = va_arg(args, int);
					_putchar(print_index);
					printed++;
					break;
				case 's':
					string = va_arg(args, char *);
					for (string_count = 0; string[string_count] != '\0'; string_count++)
					{
						print_index = string[string_count];
						_putchar(print_index);
						printed++;
					}
					break;
				case '%':
					_putchar(print_index);
					printed++;
					break;
				}
			}
		}
		     return (printed);
}
