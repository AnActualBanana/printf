#include <stdlib.h>
#include "main.h"

/**
 * _strdup - funtion returns a pointer to newly allocated space in memory
 * which contains a copy of the string given as parameter
 * @str: string to bopy copied & allocated new space in memory
 * Return: a pointer or NULL if insufficient memory or if str = NULL
 */

char *_strdup(char *str)
{
char *cpystr;
char *j;
int e = 0;

if (str == NULL)
{
return (NULL);
}
while (str[e])
{
e++;
}
cpystr = malloc(e + 1);
j = cpystr;
if (j == NULL)
{
return (NULL);
}
while (*str)
{
*j++ = *str++;
*j = '\0';
}
return (cpystr);
}
