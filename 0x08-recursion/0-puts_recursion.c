#include "main.h"
#include <stdio.h>
void _puts_recursion(char *s);
/**
 * main - Entry point
 * _puts_recursion - Prints a string with a new line
 *@s: the string to print
 * Return: Nothing
 */
void _puts_recursion(char *s);
void _puts_recursion(char *s)
{
	if (*s != '\0')
		_puts_recursion(s+1);
	putchar('\n');
}
