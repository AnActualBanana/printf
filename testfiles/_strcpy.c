#include "main.h"

/**
 * _strcpy - copies string point to by src
 * @src: string being copied
 * @dest: return value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int j = 0;

while (src[j])
{
*(dest + j) = *(src + j);
j++;
}
dest[j] = '\0';
return (dest);
}
