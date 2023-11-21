#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	float f;
	char * s;

	va_list args;
	va_start(args, format);
	
	while (format && format[i])
	{
		if (i > 0)
		{
			printf(",");
		}
		switch(format[i])
		{
			case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;

			case 'i':
			printf("%d", va_arg(args, int));
			break;

			case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;

			case 's':
			s = va_arg(args, char*);
			if(s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			break;
			default:
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}


