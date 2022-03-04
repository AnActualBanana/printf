#include "main.h"

/**
 * _conversion_s - function formats conversion character s for string
 * @string: char pointer to string in argument list
 * Return: integer count of printed characters
 */

int _conversion_s(char *string)
{
	unsigned int string_count;
	unsigned int printed = 0;
	char print_index;

	for (string_count = 0; string[string_count] != '\0'; string_count++)
	{
		print_index = string[string_count];
		_putchar(print_index);
		printed++;
	}
	return (printed);
}
