#include "main.h"
#include <string.h>
/**
*  _strlen - returns the length of a string
*  @s: string to check
*  Return: 0 is success
*/
void print_rev(char *s)
{
int length;

length = strlen(s);
while(s[length] != '\0')
{
_putchar(s[length]);
length--;
}
}
