#include "main.h"
/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list args; /* intialies args variable */

	unsigned int count; /* conter variable */
	unsigned int printed; /* variable to return character's printed */
	char print_index; /* variable to store character array index */
	/*char *string;  pointer to string */
	/*unsigned int string_count;*/

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
			case 'c':
				print_index = va_arg(args, int);
				_putchar(print_index);
				printed++;
				break;
			case '%':
				_putchar(print_index);
				printed++;
				break;
			case 'd':
				print_index = va_arg(args, int);
				_putchar(print_index);
				break;
			}
		}
	}
	return(printed);
}
