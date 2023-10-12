#include<stdio.h>
#include<stdarg.h>
/**
 * main - Entry point
 *
 * Return: (0) success
 */
int sum_them_all(const unsigned int n, ...);
int main (void){
	sum_them_all(5,1,2,3,4,5);
puts("the sum is:");
return (0);
}
int sum_them_all(const unsigned int n, ...){
	int i;
	int result = 0;
	va_list sumthemall;
	va_start (sumthemall, n);
	for(i = 0; i < 5; i++){
		result = result + va_arg(sumthemall, int);
	}
	va_end(sumthemall);
	return (result);
}


