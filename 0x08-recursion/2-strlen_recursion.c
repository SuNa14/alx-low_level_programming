#include "main.h"
/*
 * _strlen_recursion: Prints the length of a string
 * @s: string
 * Return 0
*/
int _strlen_recursion(char *s)
{
int length = 0;
if (*s != '\0')
{
return (_strlen_recursion(s + 1) + 1);
}
else
{
return (0);
}
}