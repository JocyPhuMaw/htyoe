#include <stdio.h>
#include <stdbool.h>

int main(){

int hour;
int sec;

printf("enter hours \n");
scanf("%d", &hour);

sec= hour*3600;

printf("the total second %d", sec);

return 0;
}