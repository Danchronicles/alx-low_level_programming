#include<stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - function to print sum of its arguments
 * @n: no of arguments passed to the function
 * Return: sum of arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
