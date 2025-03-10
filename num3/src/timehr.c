#include <stdio.h>
#include "funcs.h"
#define SEC_IN_HOUR 3600
#define SEC_IN_MIN 60

void timehr(int k){
 int hrs = (k / SEC_IN_HOUR) % 24;
 int mins = (k % SEC_IN_HOUR) / SEC_IN_MIN;
 printf("Время %d часов : %d минут\n", hrs, mins);
} 
void timehrplus(int k){
 int hrs = (k / SEC_IN_HOUR) % 24;
 int mins = (k % SEC_IN_HOUR) / SEC_IN_MIN;
 int sec = (k % SEC_IN_MIN);
 printf("Время %d часов : %d минут : %d секунд\n", hrs, mins, sec);
}
