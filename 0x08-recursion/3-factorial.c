#include "main.h"
/*
 * factorial: Prints the factorial of an integer
 * @n: Integer
 * Return 0
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
