#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - returns a pointer to an array of numbers 
 * @min: Lower bound
 * @max: Upper bound
 * Return: ptr or NULL
 *
*/
int *array_range(int min, int max)
{
int *p;

int j, size;

if(min > max)
{
return (NULL);
}
size = max - min + 1;
p = malloc(sizeof(int) * size);

if(p == NULL)
{
return (NULL);
}
for(j = 0; min <= max; j++)
{
p[j] = min++;
}
return (p);
}
