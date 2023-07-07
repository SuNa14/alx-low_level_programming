#include <stdio.h>
/**
 * main - prints the arguments 
 * @argv: arguments
 * @argc: arg count
 * Return: 0
*/ 
int main(int argc, char **argv)
{
int i = 0;

for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
}
return (0);
}
