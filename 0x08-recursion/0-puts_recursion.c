#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
void _puts_recursion(char *s){
	if(*s == '\0')
{
	putchar('\n');
	return;
}
putchar(*s);
s++;
}
