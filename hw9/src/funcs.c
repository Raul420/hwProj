#include <stdio.h>
#include "myfuncs.h"
void sayfunc(int choice)
{
		
}
void min(int a, int b)
{
	printf("Расчет минимального числа\n");
	if (a < b)
	{
		printf("минимальное число : %d\n", a);
	}
	else 
	{
		printf("минимальное число : %d\n", b);
	}
}
void max(int a, int b)
{
	printf("Расчет максимального числа\n");
	if (a > b)
	{
		printf("максимальное число: %d\n", a);
	}
	else
	{
		printf("максимальное число: %d\n", b);
	}
}
void sum(int a, int b)
{
	printf("Расчет суммы\n");
	printf("a + b = %d\n", a+b);
}
void sub(int a, int b)
{
	printf("Расчет разницы\n");
	printf("a - b = %d\n",a-b);
}
void multi(int a, int b)
{
	printf("Расчет произведения\n");
	printf("a * b = %d\n", a*b);
}
void quot(int a, int b)
{
	printf("Расчет частного\n");
	printf("a / b = %d\n", a/b);
}
