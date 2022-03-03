#include <stdio.h>
#include <stdbool.h>
#include "main.h"
/**
 * _itoa - funnction to convert integer to string
 * @num: integer argument to be converted
 * @str: string to be output
 * @base: base that i will be converted to
 * Return: string recently converted from integer (strout)
 */

char *_itoa(int num, char *str, int base)
{
	int i = 0;
	int rem; /* variable for itoa conversion math */
	bool isNegative = false;

	/* A zero is same "0" string in all bases */
	if (num == 0)
	{
		str[i] = '0';
		str[i +1] = '\0';
		return (str);
	}
	/* handling negative numbers for base 10s */
	if (num < 0 && base == 10)
	{
		isNegative = true;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? ((rem - 10) + 'A') : (rem + '0');
		num = num/base;
	}
	/* appending negative sign for negative numbers */
	if (isNegative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';

	rev_string(str);

	return (str);
}
