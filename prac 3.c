#include <stdio.h>
// #include <stdbool.h>

int main(){

int sec;
int hour;
int min;
printf("enter seconds\n");
scanf("%d", &sec);

hour=sec/3600;

printf("the result of hour is %d\n",hour);

min=(sec%3600)/60;

printf("the result of minute is %d\n", min );

sec=(sec%3600)%60;

printf("final result %dhr %dmin %dsec", hour,min, sec);


return 0;


}