#include <stdio.h>
#include "func.h"

//~ int sqr(const int*);
//~ int sqr(int*);
//~ int main()
//~ {
	//~ const int n1{2};
	//~ int n2{3};
	//~ int sqr_n1{sqr(&n1)};
	//~ int sqr_n2{sqr(&n2)};
	//~ std::cout<<"sqr(n1):"<<sqr_n1<<"\tn1:"<<n1<<std::endl;
	//~ std::cout<<"sqr(n2):"<<sqr_n2<<"\tn2:"<<n2<<std::endl;
//~ }
//~ int sqr(const int* num)
//~ {
	//~ return *num**num;
//~ }
//~ int sqr(int* num)
//~ {
	//~ *num=*num**num; //изменяем значение по адресу в указателе
	
	//~ return *num;
//~ }

//~ int main()
	//~ {
		//~ cout << abs(-3) << endl;
		//~ cout << int(abs(char(-3L))) << endl;
		//~ cout << abs(-3.0) << endl;
		//~ cout << abs('0') << endl;
		//~ cout << abs(3, 4) << endl;
		//~ return 0;
	//~ }
//~ int abs(int x)
//~ {
	//~ cout << "(function A)";
	//~ return x > 0 ? x : -x;
//~ }
//~ double abs(double x)
//~ {
	//~ cout << "(function B)";
	//~ return (1 - 2*(x<0))*x;
//~ }
//~ char abs(char x)
//~ {
	//~ cout << "(function C)";
	//~ return x > 0 ? x : -x;
//~ }
//~ double abs(double x, double y)
//~ {
	//~ cout << "(function D)";
	//~ return sqrt(x*x + y*y);
//~ }
//~ int main(void)
//~ {
	//~ int a = 10;
	//~ int b = 5;
	//~ void (*operations[3])(int,int) = {add,subtract,multiply};
	//~ int length = sizeof(operations)/sizeof(operations[0]);
	
	//~ for (int i = 0; i< length; i++)
	//~ {
		//~ operations[i](a, b);
	//~ }
	//~ return 0;
//~ }
int fibonachi(int n) //рекурсивная ф-ция
{
	if(n==0||n==1) return n;
	return fibonachi(n-1)+fibonachi(n-2);
}
int fibonachi2(int n)//обычная ф-ция
{
	int result = 0;
	int b = 1;
	int tmp;
	for (int i = 0;i<n;i++)
	{
		tmp = result;
		result = b;
		b+=tmp;
	}
	return result;
}
int main(void)
{
	int fib4 = fibonachi2(4);
	int fib5 = fibonachi(5);
	int fib6 = fibonachi(6);
	printf("4 fibonachi number: %d\n", fib4);
	printf("5 fibonachi number: %d\n", fib5);
	printf("6 fibonachi number: %d\n", fib6);
	return 0;
}
