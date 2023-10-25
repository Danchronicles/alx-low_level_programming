#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to be printed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s);
void _print_rev_recursion(char *s)
{
	if (*s == '/')
	{
		putchar('/');
	}
	putchar(*s);
	s--;
}
