#include "main.h"
/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */
void print_line(int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('_');
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
