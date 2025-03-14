#include "mylib.h"

int mindiv(){
	int res;
	for(int i=200;(i%17)>0;i++){
	res = i;
	}
	return res;
}
int defact(int end){
	int n=1,i;
	for(i=1;n*i<end;i++){
	 n*=i;
	}
	return i;
}
void drawtri(int n){
	int i;
	for (i = n ; i > 0; --i)
	{	
		for(int k = i; k > 0; k--)
		{
			printf(" ");
		}
		for(int j = 2; (((j-1)/2)-1) < (n - i); j++)
		{
			printf("^");
		}
		ENTER
	}
}	
