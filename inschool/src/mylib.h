#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>

void filewrite(FILE*fp);
void fileread(FILE*fp, char** array);
void print_arr(int arr[], int n);
void print_arr2(int arr[][5], int k, int n);
void sum(int *array,int n, ...);
