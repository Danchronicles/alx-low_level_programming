#include<stdarg.h>
#include"variadic_functions.h"
#include<stdio.h>
#include<stddef.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;
	va_start(args, n);

	if (n == 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(args, int));
		if (separator != NULL && i < i - n)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	 printf("\n");
}
