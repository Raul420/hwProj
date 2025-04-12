#include "head.h"
#include <string.h>

int answer(void)
{
	char ans[3];
	printf("Хотите ещё посчитаем буквы?(yes/no):\n \
	yes : повторный запуск опроса \n \
	no : выход из программы.\n");
	scanf("%3s", ans);
	if (strcmp(ans, "yes") == 0)
	{ return 2;}
	else if (strcmp(ans, "no") == 0)
	{ return 3;}
	else {return answer();}
	
}
void counter(void)
{
		char str[100] = {0};
		int count = 0; 
		printf("Введите фразу: \n");
		scanf("%s", str); 
		printf("Вы ввели: %s\n", str); 
		while (str[count]!=0){count++;}
		printf("Количество элементов:   %d\n", count);
}
