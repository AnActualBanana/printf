#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int len;
	int len2;
	/*unsigned int ui;*/
	/*void *addr;*/

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	/*ui = (unsigned int)INT_MAX + 1024;
	 *addr = (void *)0x7ffe637541f0;*/
	/*_printf("Length:[%d]\n", len);*/
	/*printf("Length:[%d]\n", len2);*/
	/*_printf("Negative:[%d]\n", -762534);*/
	  /*printf("Negative:[%d]\n", -762534);*/
	/*_printf("Test d:[%d]\n", 12);*/
	/*printf("Test d:[%d]\n", 12);*/
	_printf("Test\n");
	printf("Test\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("[%%]\n");
	printf("[%%]\n");

	return (0);
}
