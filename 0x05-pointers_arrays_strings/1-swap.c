#include "main.h"
/**
*  swap_int - swaps the value of two pointers
*  @a: first int to check
*  @b: last int to check
*  Return: 0 is success
*/
void swap_int(int *a, int *b)
{
	*a = 34;
	b = 118;
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
