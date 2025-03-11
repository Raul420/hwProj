#include <string.h>
#include <math.h>
double mathf(double a,double b,double c,double d,double e,double f,double h){
 double x =a/(b*c/(d*e/(f*h)));
 return x;
}
int bintodec(const char *binary){
 int res = 0;
 int x = 0;
 int length = strlen(binary);
 for (int i = 0; i < length; ++i){
	if (binary[length-1-i] == '1')
	{
		res+=pow(2,i);
	} 
 }
 return res;
} 	
