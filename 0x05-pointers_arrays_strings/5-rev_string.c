#include "main.h"

/**
* rev_string -> printing a string in reverse
* @s: the string to be printed in rev
*/

void rev_string(char *s)
{
	int i, n;

	n = 0;
	printf("%c\n", *s);
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

