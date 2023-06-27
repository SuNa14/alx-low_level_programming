#include "main.h"
#include <stdio.h>
/*
 * print_array: Prints n elements of array
 * @a: Array
 * @n: The number of elements
 *
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if(i != i - 1)
{
printf("%d,  ",a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
