#include <stdio.h>
#include <string.h>
#include "funcs.h"
void main(){
//----------------------ПЕРВОЕ ЗАДАНИЕ
/*
 int res1 = findxeq();
 int res2 = findxeq2();
 printf("x в первом равно %d\n, а во втором равно %d\n", res1, res2);
*/
//--------------------ВТОРОЕ ЗАДАНИЕ
 int intValue;
 double a, b, c, d, e, f, h;
 double mathf(double a, double b, double c, double d, double e, double f, double h);
 printf("Введите abcdefh из a/(b*c/(d*e/(f*h))) :\n");
 scanf("%lf", &a);
 scanf("%lf", &b);
 scanf("%lf", &c);
 scanf("%lf", &d);
 scanf("%lf", &e);
 scanf("%lf", &f);
 scanf("%lf", &h);
 double res = mathf(a, b, c, d, e, f, h);
 printf("Значение равно %.2f\n", res);
}

