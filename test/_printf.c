#include "main.h"
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
			 default:
				 count--;
				 print_index = format[count];
				 _putchar(print_index);
				 count++;
				 print_index = format[count];
				 _putchar(print_index);
			 }
		 }
}
	 return (printed);
 }
