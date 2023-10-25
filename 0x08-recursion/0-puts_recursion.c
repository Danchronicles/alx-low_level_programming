#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main (void){
char str[] = "Hello, World!";
 _puts_recursion(str);
 return(0);
}
void _puts_recursion(char *s){
if(*s == '\0')
{
	putchar('\n');
}
return;
putchar(*s);
_puts_recursion(s + 1);
}
