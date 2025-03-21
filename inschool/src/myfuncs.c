#include "mylib.h"
#include <stdio.h>
void filewrite(FILE*fp)
{
	char* message = "This msg will be written into file - data.txt";
	if(fp)
	{
		fputs(message,fp);
		fclose(fp);
		printf("File has been written\n");
	}
}
void fileread(FILE*fp, char** array)
{	
	*array = malloc(256*sizeof(char));
	if (fp&&!feof(fp))
	{
		//пока не дойдем до конца считаем по 256 байт
		while (fgets(array, 256, fp)!=NULL)
		{
			printf("%s", array);
		}
	}
	printf("array[1] = %c%c%c\n", array[1],array[2], array[3]);
	fclose(fp);
}
void print_arr(int arr[], int n)
{
	for(int k  = 0;k < n;k++)
	{
		printf("arr[%d] = %d\t", k, arr[k]);
	}
	printf("\n");
}
void print_arr2(int arr[][5], int k, int n)
{
	for(int i = 0; i < k; i++)
	{
		printf("\n");
		for(int j = 0; j < n; j++)
		{
			printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
		}
	}
	printf("\n");
}
void sum(int *array, int n, ...)
{
	va_list factor;
	// указатель va_list
	va_start(factor, n); // устанавливаем указатель
	for(int i = 0; i < n; i++)
		{
			array[i] = va_arg(factor, int);
		}
	va_end(factor); // завершаем обработку параметров
}

