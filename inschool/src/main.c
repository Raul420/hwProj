#include "mylib.h"
#include <stdio.h>

int main()
{
//============считываю массив==============================
	char* filename = "files/data.txt";
	FILE* fp = fopen(filename,"r");
	FILE* fpw = fopen(filename,"a");
	char readarray[256];
	if (fp)
	{
		while (fgets(readarray, 100, fp)!=NULL)
			{
				printf("%s", readarray);
			}
	}
	fclose(fp);
	//~ for (int i = 0; i < 20; i++) 
	//~ {
		//~ if (readarray[i])
			//~ {printf("%c\n",readarray[i]);}
	//~ }
//~ //==================сортирую массив=====================
	int size = (sizeof(readarray)/sizeof(readarray[0]));
	char* pnt = readarray;
		for (int i = 0; i < size; ++i)
	{
		printf("%c", *(pnt+i));
	}
	for(int i = 0; i < size; i ++) // i - номер прохода
	{	
		for(int j = size - 1; j > i   ; j -- )
		{
			if ( *(pnt+j-1) < *(pnt+j) ) // “нижний” < “верхний”
				{ // тогда меняем их местами
					int x = *(pnt+j-1);
					*(pnt+j-1) = *(pnt+j);
					*(pnt+j) = x;
				 }
		}
	}
	printf("size = %d", size);
	for (int i = 0; i < size; ++i)
	{
		printf("%c", *(pnt+i));
	}
	
	
	
//================сортирую массив=================//
	//~ filewrite(fp);
//================записываю массив=================//
	//~ fileread(fp, readarray);
	//~ if(fpw)
	//~ {
		//~ char* message = "123445678678678476";
		//~ fputs(message,fpw);
		//~ fclose(fpw);
		//~ printf("\n=====File has been written=====\n");
	//~ }
//================записываю массив=================//
	//---------------------------------------------
	//~ int q[5] = {5,4,2,3,4};
	//~ int qq[2][5] = {{1,2,3,4,5},{0,9,8,7,6}};
	//~ print_arr(q,5);
	//~ print_arr2(qq,2,5);
	//~ printf("%d \n", sum(4, 1, 2, 3, 4));
	//~ printf("%d \n", sum(5, 12, 21, 13, 4, 5));
	//~ int array[10];
	//~ sum(array, 5,3,4,5,6,1);
	//~ return 0;	
}	
