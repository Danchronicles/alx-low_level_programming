#include<stdio.h>
#include<stdarg.h>
/**
 * main - Entry point
 *
 * Return: (0) success
 */
int sum_them_all(const unsigned int n, ...);
int main (void){
int sum;
sum = sum_them_all(5,6);
printf("%d\n", sum);
return (0);
}
int sum_them_all(const unsigned int n, ...){
	int i;
	int result;
	va_list sumthemall;
	va_start (sumthemall, n);
	for(i = 0; i < 5; i++){
		result = result + va_arg(sumthemall, int);
	}
	return (result);
}


