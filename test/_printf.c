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
			 case 's' :
				 string = va_arg(args, char *);
				 for (string_count = 0; string[string_count] != '\0'; string_count++)
				 {
					 print_index = string[string_count];
					 _putchar(print_index);
					 printed++;
				 }
				 break;
			 case '%' :
				 _putchar(print_index);
				 printed++;
				 break;
			 case 'i' :
				 decimal = va_arg(args, int);
				 while (decimal > 0)
				 {
					 digit = decimal % 10;
					 _putchar(digit + '0');
					 printed++;
					 decimal = decimal / 10;
				 }
				 break;
			 }
		 }
}
	 return (printed);
 }
