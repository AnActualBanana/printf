#include "main.h"
<<<<<<< HEAD
/*
 *
 */int _printf(const char *format, ...)
 {
	 va_list args;
	 unsigned int count;
	 unsigned int printed;
	 char print_index;
	 char *string;
	 unsigned int decimal;
	 unsigned int digit;
	 unsigned int string_count;
	 va_start(args, format);
	 for (count = 0; format[count] != '\0'; count++)
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
			 case 's':
				 string = va_arg(args, char *);
				 printed += _conversion_s(string);
				 break;
			 case '%':
				 printed += _conversion_conversion(print_index);
				 break;
			 case 'i':
				 break;
			 }
		 }
}
	 return (printed);
 }
=======

/**
 * _printf - produces output to stdout  accoridng to a format
 * @format: a character string composed of zero or more directives
 * Returns: number of characters printed in bytes
 */


int _printf(const char *format, ...)
{
	va_list args;

	unsigned int count;
	unsigned int printed = 0;
	char print_index;
	char *string;
	va_start(args, format);
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
			}
		}
	}
	return (printed);
}
>>>>>>> main
