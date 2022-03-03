#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a string
 * return: is void
 */

void rev_string(char *s)
{
int j;
int e;
char rev;

for (j = 0; s[j] != '\0'; j++)
{
continue;
}
for (e = j - 1; e >= j / 2; e--)
{
rev = s[e];
s[e] = s[j - e - 1];
s[j - e - 1] = rev;
}
}
