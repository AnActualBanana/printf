#include "main.h"

/**
 * _strlen  -  returns the length of a string
 * @s: s is a string
 * Return: return length of string for success
*/

int _strlen(char *s)
{
int purp = 0;
while (*s != '\0')
{
purp++;
s++;
}
return (purp);
}
