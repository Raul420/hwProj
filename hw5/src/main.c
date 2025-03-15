#include "mylib.h"

int main(){
	printf("Минимальноче число от 200 делимое на 17 равно: %d\n", mindiv());
	int res;
	printf("Введите число факториала : \n");
	scanf("%d", &res);
	printf("Ответ равен : %d\n", defact(res));
	int n;
	printf("Введите количество строк: ");
	ENTER
	scanf("%d", &n);
	drawtri(n);
	int a,b;
	printf("Введите a и b: ");
	ENTER
	scanf("%d %d", &a, &b);
	MIN(a,b)
	int sec = SEC_IN_YEAR;
	printf("секунд в году: %d", sec);
	ENTER
	return 0;
}
