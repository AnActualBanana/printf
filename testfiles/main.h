#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
char *convert(unsigned int num, int base);
void _puts(char *str);
char *_itoa(int num, char *str, int base);
void rev_string(char *s);
int _strlen(char *s);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
int _convertc(char print_index);

#endif
