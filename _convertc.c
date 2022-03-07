#include "main.h"

/**
 * _convertc - converting chars into proper format for printing
 * @print_index: the part of the string awaiting conversion
 * Return: # of character printed in bytes
 */

int _convertc(char print_index)
{
        int printed = 0;

	if (!print_index)
	{
		return (-1);
	}
        _putchar(print_index);
        printed++;
        return (printed);
}
