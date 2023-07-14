#include "main.h"
/**
 * malloc_checked - returns a pointer to allocated memory
 * @b: Size of allocated memory
 * Return:0
 *
*/
void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (p == NULL)
{
return (98);
exit(98);
}
else
{
return (p);
}
