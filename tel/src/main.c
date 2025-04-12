#include <stdio.h>
#include <string.h>
struct person
{
	char name[20];
	int age;
	char num[15];
};
int main()
{
	char * filename = "people.bin";
	// массив для записи
	struct person man;
	size_t size = sizeof(man);
	strcpy(man.name,"new");
	man.age = 27;
	strcpy(man.num,"+79313076566");
	// размер всего массива
	// количество структур
	FILE *fp = fopen(filename, "a");
	// запись файла
	fwrite(&man, sizeof(man), 1, fp); // записываем массив структур
	fclose(fp);
	
	// структура для чтения
	struct person unknown[5];
	fp = fopen(filename, "r");
	// считываем одну структуру
	for(int i = 0; !feof(fp);i++)
	{
		fread(&unknown[i], size, 1, fp);
		printf("Name: %s \n", unknown[i].name);
		printf("Age: %d \n", unknown[i].age);
		printf("Num: %s \n", unknown[i].num);
	}
	fclose(fp);
}
