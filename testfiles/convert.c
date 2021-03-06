#include <stdio.h>

/**
 * convert - converts integer into octal, hex, etc
 * @num - integer to be converted
 * @base - base to convert to
 * Return - converted number
 */

char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
