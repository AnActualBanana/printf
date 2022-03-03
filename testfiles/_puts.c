#include "main.h"

/**
 * _puts - prints a string followed by new line to stdout
 * @str: a string
 * Return: return string to stdout for success
*/

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
