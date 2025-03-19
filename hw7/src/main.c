#include <stdio.h>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>

int main()
	//Задание 1 (a)
	//~ int arr[5][7] = {
		//~ {1,5,6,3,5,2,3},
		//~ {1,5,6,3,5,2,6},
		//~ {1,5,6,3,5,2,27},
		//~ {1,5,6,3,5,2,9},
		//~ {1,5,6,3,5,2,20}
	//~ };
	//Задание 1 (b)
	//~ int arr[5][7];
	//~ for (int i = 0; i < 5*7; ++i)
	//~ {
		//~ arr[i/5][i%7] = i+1;
	//~ }
	//~ for (int i = 0; i < 5*7; ++i)
	//~ {
		//~ printf("%d\n", arr[i/5][i%7]);
	//~ }
	//ЗАДАНИЕ 1 C
	//~ int i,j,arr[5][7];
	//~ for(i=0;i<5;++i)
	//~ {
		//~ for(j=0;j<7;++j)
		//~ {
			//~ arr[i][j] = (j+1)*(i+1);
		//~ }
	//~ }
		//~ for(i=0;i<5;++i)
	//~ {
		//~ for(j=0;j<7;++j)
		//~ {
			//~ printf("%d\n", arr[i][j]);
		//~ }
	//~ }
	//ЗАДАНИЕ 1 C
	//ЗАДАНИЕ 2
	//~ int ar[ ]={6,1,-10, 5, 2, -7};
	//~ int size = (sizeof(ar)/sizeof(ar[0]));
	//~ int* pnt = ar;
	//~ for(int i = 0; i < size; i ++) // i - номер прохода
	//~ {	
		//~ for(int j = size - 1; j > i   ; j -- )
		//~ {
			//~ if ( *(pnt+j-1) > *(pnt+j) ) // “нижний” < “верхний”
				//~ { // тогда меняем их местами
					//~ int x = *(pnt+j-1);
					//~ *(pnt+j-1) = *(pnt+j);
					//~ *(pnt+j) = x;
				 //~ }
		//~ }
	//~ }
	//~ for (int i = 0; i < size; ++i)
	//~ {
		//~ printf("%d\n", *(pnt+i));
	//~ }
//ЗАДАНИЕ 2 
//Задание 3
	//~ const int x = 10, y = 20;
	//~ int ** array = (int**) malloc (sizeof (int*) * x);
	//~ for (int i = 0; i < x; i++) 
	//~ {
		//~ array [i] = (int*) malloc (sizeof (int)*y);
	//~ }
//Задание 4
	//~ double tmp, array[30]={1.2,1.6,5.7,8,10};
	//~ tmp = array[0];
		//~ int indx;
	//~ for (int i = 0; i<30;i++)
	//~ {
		//~ if (array[i]>tmp)
		//~ {
			//~ tmp = array[i];
			//~ indx = i;
		//~ }
	//~ }
	//~ printf("макс число %.2f\n %d\n", tmp, indx);
//Задание 5
//~ {
	//~ char *buffer = (char*) malloc(128);
	//~ char *word = (char*) malloc(128);
	//~ scanf("%127s", buffer);
	//~ scanf("%127s", word);
	//~ int ans = strcmp(word, buffer);
	//~ printf("ответ: %d\n", ans);
	//~ free(word);
//~ }

		
